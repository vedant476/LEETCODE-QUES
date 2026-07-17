/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next){
            return head;
        }
        ListNode*curr = head->next;
        ListNode*pre = head;
        while(curr){
            ListNode*temp = new ListNode(gcd(pre->val,curr->val));
            temp->next = curr;
            pre->next = temp;
            curr=curr->next;
            pre=pre->next->next;
        }
        return head;
    }
};