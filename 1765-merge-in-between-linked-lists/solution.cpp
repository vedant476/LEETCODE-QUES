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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list1;

        while(temp2 && b >= 0){
            temp2 = temp2->next;
            b-- ;
        }

        while(temp1){
            if(a == 1){
                temp1->next = list2;
                break ;
            }
            temp1 = temp1->next ;
            a -- ;
        }

        temp1 = list2;

        while(temp1->next){
            temp1 = temp1->next;
        }

        temp1->next = temp2;
        return list1 ;
    }
};