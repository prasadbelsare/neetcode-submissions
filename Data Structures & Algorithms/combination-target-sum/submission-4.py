class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        res,sol=[],[]
        n=len(nums)

        def dfs(i,s):
            if s==target:
                res.append(sol.copy())
                return
            if s>target or i>=n:
                return
            sol.append(nums[i])
            dfs(i,s+nums[i])
            sol.pop()
            dfs(i+1,s)
            
        dfs(0,0)
        return res