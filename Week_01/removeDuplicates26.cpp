class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();

        int i = 0, j = 1;
        for(; j < nums.size(); j++)
        {
            if(nums[j] != nums[i] && j> i)
            {
                nums[++i] = nums[j];
            }
        }
        return i+1;
    }
};

//数组按照顺序执行，如果j与i所指的数字不一致，将j赋值给i+1，需确保j>i
