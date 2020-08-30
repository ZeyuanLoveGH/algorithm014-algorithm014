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

//�����ƶ�һ�Σ����������ƶ�һ�Ρ������ƶ�һ�Σ����������ƶ�һ�Ρ�
//��a,b�ƶ�����