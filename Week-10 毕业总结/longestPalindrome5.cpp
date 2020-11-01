class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() < 2) return s;

        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        string res = "";
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = i; j < n; j++)
            {
                dp[i][j] = s[i] == s[j] && (j - i < 2 || dp[i+1][j-1]); //j - i  < 2 表示一个字符，肯定是回文串

                if(j - i + 1 > res.length() && dp[i][j])
                {
                    res = s.substr(i, j-i+1);
                }  
            }
        }

        return res;
    }
};

//dp dp[i][j] 表示字符串从i到j的位置为回文串 表示为1 否则为0