class Solution {
public:
    int getKthMagicNumber(int k) {
        vector<int> ans;
        ans.resize(k+1);
        ans[0] = 1;
        int p3 = 0, p5 = 0, p7 = 0;
        for(int i = 1; i < k; i++)
        {
            int tmp = min(min(ans[p3]*3, ans[p5]*5), ans[p7]*7);
            if(ans[p3]*3 == tmp) p3++;
            if(ans[p5]*5 == tmp) p5++;
            if(ans[p7]*7 == tmp) p7++;
            ans[i] = tmp;
        }
        return ans[k-1];
    }
};

//3指针 + 动态规划