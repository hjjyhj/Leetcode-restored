class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cursum = 0
        maxsum = nums[0]
        
        for num in nums:
            if cursum < 0:
                cursum = 0
            cursum += num
            maxsum = max(maxsum, cursum)
        return maxsum