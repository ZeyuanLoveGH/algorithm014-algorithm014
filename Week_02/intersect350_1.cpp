class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size()) return intersect(nums2, nums1); //���nums1size��С����ѭ������nums1��
        vector<int> ans;
        if(nums1.size() == 0 || nums2.size() == 0) return ans;
        
        map<int,int> m;
        //����nums2��size��С
        for(int i = 0; i < nums2.size(); i++)
        {
            if(m.find(nums2[i]) != m.end())
            {
                m[nums2[i]]++;
            }
            else
            {
                m.insert(make_pair(nums2[i], 1));
            }
        }

        for(int i = 0; i < nums1.size(); i++)
        {
            if(m.find(nums1[i]) != m.end() && m[nums1[i]] > 0)
            {
                m[nums1[i]]--;
                ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
};

//1���Ƚ�map��������һ���������ݷ���map��
//2��ѭ����һ�����飬������map������ڣ�������������vector�У���m[i]--
//ʱ�� O(m+n) �ռ�O(min(m,n))