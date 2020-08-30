/**
 * leetcode-17 电话号码组合 
 * 
 * 给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
 * 输入："23"
 * 输出：["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 * 
*/

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    unordered_map<char,string> m;
    Solution()
    {
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";    
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()) 
        {
            return {};
        }
        return helper(digits);
    }

    //之所以用的helper 是因为""输出[]，而不是[""]。导致递归到最后一层的时候，如果用原函数，需返回[""]。与原有输出不符。
    vector<string> helper(string digits)
    {
        vector<string> ans;
        if(digits.empty())  return {""};
        vector<string> tmp = helper(digits.substr(1));
        for(int i = 0; i < m[digits[0]].size(); i++)
        {
            for(int j = 0; j < tmp.size(); j++)
            {
                ans.push_back(m[digits[0]][i]+tmp[j]);
            }
        }
        return ans;
    }
};

//DFS深度优先遍历试试

int main()
{
    Solution s;
    vector<string> v;
    v = s.letterCombinations("23");
    for(string s:v)
    {
        cout<<s<<endl;
    }
    return 0;
}