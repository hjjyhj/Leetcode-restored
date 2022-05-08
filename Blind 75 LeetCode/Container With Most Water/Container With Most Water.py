class Solution:
    def maxArea(self, height: List[int]) -> int:
        p1, p2 = 0, len(height) - 1
        maxi = 0
        curr = 0
        while p1 < p2:
            curr = (min(height[p1], height[p2]) * (p2-p1))
            maxi = max(curr, maxi)
            
            if height[p1] > height[p2]:
                p2 -= 1
            elif height[p1] < height[p2]:
                p1 += 1
            else:
                p1 += 1
                p2 -= 1
        
        return maxi