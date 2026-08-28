# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def helper(self,root):
        if root.left is None:
            return root.right
        if root.right is None:
            return root.left
        left=root.left
        right=root.right
        while left.right:
            left=left.right
        left.right=right
        return root.left



    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root is None:
            return None
        if key==root.val:
            return self.helper(root)
        curr=root
        while curr:
            if curr.val>key:
                if curr.left and curr.left.val==key:
                    curr.left=self.helper(curr.left)
                    break
                curr=curr.left
            else:
                if curr.right and curr.right.val==key:
                    curr.right=self.helper(curr.right)
                    break
                curr=curr.right 
        return root

        