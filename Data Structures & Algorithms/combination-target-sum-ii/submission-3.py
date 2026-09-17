class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        res,sol=[],[]
        n=len(candidates)
        candidates.sort()
        def dfs(i,s):
            if s==target:
                res.append(sol.copy())
                return
            if s>target or i>=n:
                return
            sol.append(candidates[i])
            dfs(i+1,s+candidates[i])
            sol.pop()
            while i+1<n and candidates[i]==candidates[i+1]:
                i+=1
            dfs(i+1,s)
        dfs(0,0)
        return res
        