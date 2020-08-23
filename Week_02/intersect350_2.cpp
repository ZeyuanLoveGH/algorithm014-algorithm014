class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        if(nums1.size() == 0 || nums2.size() == 0) return ans;
        
        int m = nums1.size(), n = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        while(i < m && j < n)
        {
            if(nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};

//1、将两个数组排序nlogn
//2、再双指针同时环遍历两个数组，小的数组指针++
//时间 O(mlogm+nlogn)+O(m+n) 即 O(mlogm+nlogn) 空间O(1)