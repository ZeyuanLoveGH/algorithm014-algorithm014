class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> ans(r, vector<int>(c,0));  

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(i > 0 && j > 0)
                {
                    ans[i][j] = grid[i][j] + min(ans[i-1][j], ans[i][j-1]);
                }
                else if(i > 0 && j == 0)
                {
                    ans[i][j] = grid[i][j] + ans[i-1][j];
                }
                else if(i == 0 && j > 0)
                {
                    ans[i][j] = grid[i][j] + ans[i][j-1];
                }
                else
                {
                    ans[i][j] = grid[i][j]; 
                }               
            }
        }

        return ans[r-1][c-1];
    }
};

//(m,n)=min((m-1,n),(m,n-1))+grid[m][n]  用二维数组来存储到每个点的最短路径