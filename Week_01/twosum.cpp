class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size() == 0) return ans;
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m.insert(make_pair(target-nums[i],i));
            if(m.find(nums[i]) != m.end() && i != m[nums[i]] )
            {
                ans.push_back(m[nums[i]]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};