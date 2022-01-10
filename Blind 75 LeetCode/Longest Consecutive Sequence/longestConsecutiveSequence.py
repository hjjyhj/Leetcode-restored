class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = list(set(nums))
        nums.sort()
        i = 1
        m = 0
        cur = 1
        if len(nums) == 1:
            return 1
        
        while i < len(nums):
            
            if nums[i-1] + 1 == nums[i]:
                cur += 1
            else:
                cur = 1  
            i += 1
            m = max(m, cur)
        return m
        
        #1,2,3,4,100,200,300