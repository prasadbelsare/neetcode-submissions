# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        prev=None
        n1=head
        n2=head
        length=0
        temp=head
        while temp:
            length+=1
            temp=temp.next

        for i in range (1,n):
            n2=n2.next
        while n2 and n2.next:
            prev=n1
            n1=n1.next
            n2=n2.next
        if length==n:
            return head.next
        prev.next=n1.next
        n1.next=None
        return head
        

        