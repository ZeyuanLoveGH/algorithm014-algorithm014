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
        if(head == NULL || head->next == NULL) return head;

        ListNode *pre =new ListNode(0);
        pre->next = head;
        ListNode *cur = pre;
        while(cur->next != NULL && cur->next->next != NULL)
        {
            ListNode *first = cur->next;
            ListNode *second = cur->next->next;
            cur->next = second;
            first->next = second->next;
            second->next = first;
            cur = cur->next->next;
        }
        return pre->next;
    }
};