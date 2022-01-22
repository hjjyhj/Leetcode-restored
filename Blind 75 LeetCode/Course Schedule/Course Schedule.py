class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        pMap = { i:[] for i in range(numCourses) }
        for c, p in prerequisites:
            pMap[c].append(p)
        
        visit = set()
        
        def dfs(c):
            if c in visit:
                return False
            if c == []:
                return True
            
            visit.add(c)
            for p in pMap[c]:
                if not dfs(p): return False
            visit.remove(c)
            
            pMap[c] = []
            return True
        
        for c in range(numCourses):
            if not dfs(c): return False
        return True
        