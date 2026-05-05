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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return nullptr;
        int n=0;
        ListNode* temp=head;
        ListNode* tail=new ListNode();
        while(temp){
            tail=temp;
            n+=1;
            temp=temp->next;
        }
        
        k=k%n;
        if(k==0)return head;
        ListNode* newT=head;
        for(int i=0;i<n-k-1;i++){
            newT=newT->next;
        }
        ListNode*newH=newT->next;
        newT->next=nullptr;
        tail->next=head;

        return newH;

    }
};