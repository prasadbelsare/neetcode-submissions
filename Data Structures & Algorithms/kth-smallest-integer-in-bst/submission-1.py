# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        self.res=-1
        self.cnt=0
        def dfs(root,x):
            if root is None or self.cnt==x:
                return
            dfs(root.left,x)
            self.cnt+=1
            if self.cnt==x:
                self.res=root.val
            dfs(root.right,x)
        dfs(root,k)
        return self.res

        