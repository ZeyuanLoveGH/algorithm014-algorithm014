class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.empty() || nums2.empty()) return;
        while(m>=1 && n>= 1)
        {
            if(nums1[m-1] < nums2[n-1])
            {
                nums1[m+n-1] = nums2[n-1];
                n--;
            }
            else
            {
                nums1[m+n-1] = nums1[m-1];
                m--;
            }
        }

        while(n>=1)
        {
            nums1[m+n-1] = nums2[n-1];
            n--;
        }
    }
};