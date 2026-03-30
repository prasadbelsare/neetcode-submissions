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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* first=dummy;
        ListNode* sec=head;

        while(n>0){
            sec=sec->next;
            n--;
        }

        while(sec!=nullptr){
            first=first->next;
            sec=sec->next;
        }
        first->next=first->next->next;
        return dummy->next;
    }
};
