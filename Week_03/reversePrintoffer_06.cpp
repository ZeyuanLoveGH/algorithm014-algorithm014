class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        if(!head) return {};
        vector<int> ans = reversePrint(head->next);
        ans.push_back(head->val);
        return ans;
    }
};