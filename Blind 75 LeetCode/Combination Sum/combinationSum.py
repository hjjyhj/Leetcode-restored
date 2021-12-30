class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        
        def rec(i, cur, total):
            if total == target:
                ans.append(cur.copy())
                return
            if i >= len(candidates) or total > target:
                return
            
            cur.append(candidates[i])
            rec(i, cur, total + candidates[i])
            cur.pop()
            rec(i+1, cur, total)
            
        rec(0, [], 0)
        return ans