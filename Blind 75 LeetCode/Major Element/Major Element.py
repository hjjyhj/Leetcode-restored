class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        mod = mode(nums)
        if nums.count(mod) > len(nums)/2: 
            return mod