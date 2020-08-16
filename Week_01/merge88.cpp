class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n<=0) return;
        //比较两个数组较大值，并将较大的值放在最后的位置上
        while(m>=1 && n>=1)
        {
            if(nums1[m-1] > nums2[n-1])
            {
                nums1[m+n-1] = nums1[m-1];
                m--;
            }
            else
            {
                nums1[m+n-1] = nums2[n-1];
                n--;
            }
        } 

        //m>0 的话，说明不需要再讲nums2放到nums1里了
        while(n >= 1)
        {
            nums1[m+n-1] = nums2[n-1];
            n--;
        }
        return;
    }
};

//倒叙对两个数组进行循环