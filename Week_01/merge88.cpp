class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n<=0) return;
        //�Ƚ���������ϴ�ֵ�������ϴ��ֵ��������λ����
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

        //m>0 �Ļ���˵������Ҫ�ٽ�nums2�ŵ�nums1����
        while(n >= 1)
        {
            nums1[m+n-1] = nums2[n-1];
            n--;
        }
        return;
    }
};

//����������������ѭ��