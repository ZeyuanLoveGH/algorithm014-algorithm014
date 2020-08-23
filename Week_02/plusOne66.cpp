class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 0) 
        {
            digits.push_back(1);
            return digits;
        }

        int i = digits.size() - 1;

        while(i>=0 && digits[i] == 9)
        {
            digits[i] = 0;
            i--;
        }

        if(i<0) 
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        else
        {
            digits[i]++;
        }
        return digits;
    }
};

//从后往前遍历数组，连续且为9时，置为0. 再将i所在位置加1即可。
//如果i<0 表明数组为9，99,999。 在下标0置为1，后面加0即可。