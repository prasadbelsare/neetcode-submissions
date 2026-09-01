# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        self.good = 0

        def dfs(node, check):
            if node.val >= check:
                self.good += 1
            if node.left:
                dfs(node.left, max(check, node.val))
            if node.right:
                dfs(node.right, max(check, node.val))

        dfs(root, root.val)
        return self.good
