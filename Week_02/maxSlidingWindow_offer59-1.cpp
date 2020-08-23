class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(nums.size() == 0) {
            return ans;
        }

        int beg = nums[0];
        for(int i = 0; i < nums.size() - k+1; i++)
        {
            int curmax = nums[i];
            for(int j = i; j < i+k; j++)
            {
                curmax = max(curmax,nums[j]);
            }
            ans.push_back(curmax);
        }
        return ans;
    }
};

//双重循环，求最大值