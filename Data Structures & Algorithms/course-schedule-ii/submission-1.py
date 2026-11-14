from collections import defaultdict
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        prereq=defaultdict(list)
        for c, p in prerequisites:
            prereq[c].append(p)

        visit,cycle=set(),set()
        res=[]

        def dfs(course):
            if course in cycle:
                return False
            if course in visit:
                return True
            cycle.add(course)
            for pre in prereq[course]:
                if dfs(pre)==False:
                    return False
            cycle.remove(course)
            visit.add(course)
            res.append(course)
            return True


        for course in range(numCourses):
            if dfs(course)==False:
                return []
        return res

        