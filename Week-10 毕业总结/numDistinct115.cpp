class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.length(), n = t.length();
        vector<vector<long>> dp(n+1, vector<long>(m+1, 0));

        for(int i = 0; i < m; i++)
        {
            dp[0][i] = 1; //tΪ�մ���sƥ����Զ��1
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j <= m; j++)
            {
                if(s[j-1] == t[i-1])
                {
                    dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
                }
                else
                {
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
        return dp[n][m];
    }
};

//dp[i][j] = s[j] == t[i] ? dp[i-1][j-1] + dp[i][j-1]:dp[i][j-1] 

//dp[i][j] ��ʾ�ַ���tǰi���ַ��������ַ���sǰj���ַ�ƥ��ĸ���