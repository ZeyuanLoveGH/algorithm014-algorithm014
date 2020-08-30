#include <iostream>

using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n < 3) return n;
        int first = 1, second = 2;
        for(int i = 3; i <= n; i++)
        {
            int tmp = first+second;
            first = second;
            second = tmp;
        }
        return second;
    }
};

//fist 表示第一个 second表示第二个

int main()
{
    Solution s;
    cout<<s.climbStairs(5);
    return 0;
}