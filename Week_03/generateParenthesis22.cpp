#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> v;
    vector<string> generateParenthesis(int n) {
        generate(0, 0, n, "");
        return v;
    }

    void generate(int left, int right, int n, string s)
    {
        //terminator
        if(left == n && right == n)
        {
            v.push_back(s);
        }

        if(left<n) generate(left+1,right, n, s+"(");
        if(right < left) generate(left, right+1, n, s+")");

    }
};

//left 随时可以加 只要别超标
//right 必须之前有左括号 且左括号个数大于右括号

int main()
{
    Solution s;
    vector<string> v;
    v = s.generateParenthesis(3);
    for(string s:v)
    {
        cout<<s<<endl;
    }
    return 0;
}