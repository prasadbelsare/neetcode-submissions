# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if not head:
            return
        
        length=0
        tHead=head
        while tHead:
            length+=1
            tHead=tHead.next
        

        dummy=ListNode()
        prev = dummy
        curr = head
        dummy.next=head
        
        i=1
        while i<=(length-n):
            prev=curr
            curr=curr.next
            i+=1
        
        prev.next=curr.next
        curr.next=None
        
        return dummy.next
        


