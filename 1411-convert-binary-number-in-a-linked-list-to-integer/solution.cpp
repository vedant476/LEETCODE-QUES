class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            result = (result << 1) | curr->val;
            curr = curr->next;
        }

        return result;
    }
};
