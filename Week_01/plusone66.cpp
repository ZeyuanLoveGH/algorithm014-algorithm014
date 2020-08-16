class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        if(digits.size() == 0) 
        {
            ans.push_back(1);
            return ans;
        }

        int tmp = 1;
        for(int i = digits.size() -1; i>=0; i--)
        {
            ans.push_back((digits[i]+tmp)%10);
            tmp = (digits[i]+tmp)/10;
        }

        if(tmp != 0) ans.push_back(tmp);

        reverse(ans.begin(),ans.end());

        return ans;
    }
};