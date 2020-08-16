class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k = k%nums.size();
        if(k == 0) return;
        //先反转整个数组
        reverse(nums,0, nums.size()-1);
        //再反转前面k个
        reverse(nums,0,k-1);
        //最后反转后面n-k个
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

//3 反转数组
