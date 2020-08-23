class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size()) return intersect(nums2, nums1); //如果nums1size最小，就循环调用nums1的
        vector<int> ans;
        if(nums1.size() == 0 || nums2.size() == 0) return ans;
        
        map<int,int> m;
        //假设nums2的size最小
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

//1、先建map，将其中一个数组数据放至map中
//2、循环另一个数组，如果如果map数组存在，将数组推送至vector中，且m[i]--
//时间 O(m+n) 空间O(min(m,n))