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

//�Ӻ���ǰ�������飬������Ϊ9ʱ����Ϊ0. �ٽ�i����λ�ü�1���ɡ�
//���i<0 ��������Ϊ9��99,999�� ���±�0��Ϊ1�������0���ɡ�