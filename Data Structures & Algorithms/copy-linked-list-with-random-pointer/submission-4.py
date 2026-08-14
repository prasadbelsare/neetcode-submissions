"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        mp={None:None}
        tHead=head
        while tHead:
            mp[tHead]=Node(tHead.val)
            tHead=tHead.next
        
        tHead = head
        while tHead:
            copied_node=mp[tHead]

            copied_node.next=mp[tHead.next]
            copied_node.random=mp[tHead.random]

            tHead=tHead.next
        
        return mp[head]