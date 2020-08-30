class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.size() % 2 != 0) return false;
        int a = 0 , b = 0;
        for(char c : moves)
        {
            if(c == 'U') a++;
            else if(c == 'D') a--;
            else if(c == 'R') b++;
            else b--; 
        }
        return a == 0 && b == 0;
    }
};

//向左移动一次，必须向右移动一次。向上移动一次，必须向下移动一次。
//用a,b移动次数