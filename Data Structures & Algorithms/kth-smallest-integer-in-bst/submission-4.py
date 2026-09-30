# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        self.res=None
        self.temp=k
        def dfs(node):
            if node is None or self.res is not None:
                return
            dfs(node.left)
            self.temp-=1

            if self.temp==0:
                self.res=node.val
                return
            dfs(node.right)
            

                

        
        dfs(root)
        return self.res
