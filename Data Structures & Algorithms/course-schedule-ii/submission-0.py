from collections import defaultdict
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        prereq=defaultdict(list)
        for c,p in prerequisites:
            prereq[c].append(p)
        
        res=[]
        visit={}
        def dfs(course):
            if course in visit:
                return visit[course]==2

            visit[course]=1
            for p in prereq[course]:
                if not dfs(p):
                    return False
            visit[course]=2
            res.append(course)
            return True
            

        for course in range(numCourses):
            if not dfs(course):
                return []

        return res

        