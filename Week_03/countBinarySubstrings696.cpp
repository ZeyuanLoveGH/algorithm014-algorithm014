class Solution {
public:
    int countBinarySubstrings(string s) {
        if(s.empty()) return 0;
        s += '-';
        char last = '-';
        int pre = 0, cur = 0, ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(last != s[i])
            {
                last = s[i];
                ans += min(pre,cur);
                pre = cur;
                cur = 0;
            }
            cur++;
        }
        return ans;
    }
};

//既然可以用数组存放0和1的数量，那么用前后值也可以