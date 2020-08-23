class Solution {
public
    string removeOuterParentheses(string S) {
        int count = 0,begin = 0;
        string ans = ;

        for(int i = 0; i  S.size(); i++)
        {
            if(S[i] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            
            if(count == 0)
            {
                ans +=  S.substr(begin+1, i-begin-1);
                begin = i+1;
            }
        }
        return ans;
    }
};

先分解，得到原语
再把原语最外层括号去掉