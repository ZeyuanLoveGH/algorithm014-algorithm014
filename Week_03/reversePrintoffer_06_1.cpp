class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        if(!head) return ans;
        stack<int> s;
        while(head)
        {
            s.push(head->val);
            head = head->next;
        }

        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};