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

            //交换 注意 先链接到上面的串
            pre->next = second;
            first->next = second->next;
            second->next = first;

            //再更新pre和head
            pre = first;
            head = first->next;
        }
        return ans;
    }
};

//链表两两交换的关键在于，不仅要first->next =second->next, second->next = first.
//那谁指向second呢？ 因此需要一个pre节点将pre->second->fisrt这样串起来才可以。