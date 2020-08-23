class Solution {
public:
    string getHint(string secret, string guess) {
        if(secret.size() == 0) return "0A0B";
        vector<int> sec(10,0);
        vector<int> gue(10,0);
        int bulls = 0, cows = 0;
        for(int i = 0; i < secret.size(); i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++;
            }
            else
            {
                int t = secret[i] - '0';
                int t1 = guess[i] - '0';
                sec[t]++;
                gue[t1]++;
            }
        }

        for(int i = 0; i<sec.size(); i++)
        {
            cows += min(sec[i], gue[i]);
        }

        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};

//��Ϊ���ֵ�����ֻ����0~9 ���Կ��ٴ�СΪ10������ռ䣬��������ʾ0~9������ֵ��ʾ���ִ���