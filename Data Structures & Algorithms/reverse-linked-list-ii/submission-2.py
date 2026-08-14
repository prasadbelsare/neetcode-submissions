# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        leftPrev = dummy
        curr = head

        k = 1
        while k < left:
            leftPrev = leftPrev.next
            curr = curr.next
            k += 1

        prev = None
        i = 1

        while i <= right - left + 1:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
            i += 1
        leftPrev.next.next = curr
        leftPrev.next = prev

        return dummy.next
