class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        int size = 1;

        ListNode* temp = head;

        while (temp->next) {
            size++;
            temp = temp->next;
        }
        k = k%size;
        if (k == 0) return head;
        temp->next = head;
        int s = size - k;
        ListNode* curr = head;

        while(--s){
            curr = curr->next;
        }

        ListNode* V = curr->next;
        curr->next = nullptr;

        return V;
    }
};