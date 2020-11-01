class Solution {
public:
    int minDistance(string word1, string word2) {
       if(word1.size() == 0) return word2.size();
       if(word2.size() == 0) return word1.size();

       int m = word1.size();
       int n = word2.size();

       int dp[m+1][n+1];

       for(int i = 0; i <= m; i++)
       {
           dp[i][0] = i;
       } 

       for(int i = 0; i <= n; i++)
       {
           dp[0][i] = i;
       }

       for(int i = 1; i <= m; i++)
       {
           for(int j = 1; j <= n; j++)
           {
               if(word1[i-1] == word2[j-1])
               {
                   dp[i][j] = dp[i-1][j-1];
               }
               else
               {
                   dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
               }
           }
       }

       return dp[m][n];
    }
};

//dp问题
//i代表word1字符串第i个字符 j代表word2字符串第j个字符 word[i][j] 表示word1与word2 分别在i，j长度时的最少操作数
// if(word1[i] == word2[j]) dp[i][j] = dp[i-1][j-1]
// else dp[i][j] = min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]) + 1