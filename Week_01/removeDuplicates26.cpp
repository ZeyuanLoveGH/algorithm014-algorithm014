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

//���鰴��˳��ִ�У����j��i��ָ�����ֲ�һ�£���j��ֵ��i+1����ȷ��j>i
