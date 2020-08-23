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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *second = head->next;
        while(second != NULL && second->next != NULL)
        {
            if(head == second)
            {
               return true;     
            } 

            head = head->next;
            second = second->next->next;
        }
        return false;
    }
};