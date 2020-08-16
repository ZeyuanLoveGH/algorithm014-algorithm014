class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k = k%nums.size();
        if(k == 0) return;
        //�ȷ�ת��������
        reverse(nums,0, nums.size()-1);
        //�ٷ�תǰ��k��
        reverse(nums,0,k-1);
        //���ת����n-k��
        reverse(nums,k,nums.size()-1);
    }

    void reverse(vector<int> &nums, int left, int right)
    {
        while(left < right)
        {
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
            left++;
            right--;
        }
    }

};

//3 ��ת����
