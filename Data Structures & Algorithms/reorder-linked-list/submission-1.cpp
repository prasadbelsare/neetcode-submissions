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
    void reorderList(ListNode* head) {

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* p2=slow->next;
        slow->next=nullptr;
        ListNode * prev=nullptr;

        while(p2){
            ListNode* temp=p2->next;
            p2->next=prev;
            prev=p2;
            p2=temp;
        }
        p2=prev;
        ListNode *p1=head;

        while(p2){
            ListNode* tmp1=p1->next;
            ListNode* tmp2=p2->next;
            p1->next=p2;
            p2->next=tmp1;
            p1=tmp1;
            p2=tmp2;
        }
    }
};
