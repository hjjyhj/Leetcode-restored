class Solution:
    def maxArea(self, height: List[int]) -> int:
        p1 = 0
        p2 = len(height) - 1
        maximum = 0
        
        while p1 < p2:
            curr = ((p2-p1) * min(height[p1],height[p2]))
            maximum = max(maximum, curr)
                           
            if height[p1] > height[p2]:
                p2 -= 1
            elif height[p1] < height[p2]:
                p1 += 1
            else:
                p1 += 1
                p2 -= 1
        return maximum