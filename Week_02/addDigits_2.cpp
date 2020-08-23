class Solution {
public:
    int addDigits(int num) {

        return (num-1)%9+1;
    }
};

//先暴力解法+递归