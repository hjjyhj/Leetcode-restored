class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        curMin, curMax = 1, 1
        res = max(nums)
        
        for n in nums:
            
            temp = n * curMax
            
            curMax = max(n*curMax, n*curMin, n)
            curMin = min(temp, n*curMin, n)
            res = max(res, curMax)
        return res
        