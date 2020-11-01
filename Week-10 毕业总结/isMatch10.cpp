class Solution {
public:
    map<string, bool> memo;
    bool isMatch(string s, string p) {
        if(p.length() == 0) return s.length() == 0;
        
        return dp(s, 0, p, 0);
    }

    bool dp(string s, int i, string p, int j)
    {
        int m = s.length(), n = p.length();
        if(j == n) return i == m;

        if(i == m)
        {
            if((n - j) % 2 == 1)
                return false;
            for(int k = j; k+1 < n; k+=2)
            {
                if(p[k+1] != '*')
                {
                    return false;
                }
            }
            return true;
        }

        string key = to_string(i)+"."+to_string(j);
        if(memo.count(key)) return memo[key];

        bool res = false;

        if(s[i] == p[j] || p[j] == '.')
        {
            if(j < n-1 && p[j+1] == '*')
            {
                res = dp(s, i+1, p, j) || dp(s, i, p, j+2);
            }
            else
            {
                res = dp(s, i+1, p, j+1);
            }
        }
        else
        {
            if(j < n-1 && p[j+1] == '*')
            {
                res = dp(s, i, p, j+2);
            }
            else
            {
                res = false;
            }
        }

        memo[key] = res;
        return res;

     }
};