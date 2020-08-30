/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *ans = head->next;
        ListNode *pre = new ListNode(0);
        while(head && head->next)
        {
            ListNode *first = head;
            ListNode *second = head->next;

            //���� ע�� �����ӵ�����Ĵ�
            pre->next = second;
            first->next = second->next;
            second->next = first;

            //�ٸ���pre��head
            pre = first;
            head = first->next;
        }
        return ans;
    }
};

//�������������Ĺؼ����ڣ�����Ҫfirst->next =second->next, second->next = first.
//��˭ָ��second�أ� �����Ҫһ��pre�ڵ㽫pre->second->fisrt�����������ſ��ԡ�