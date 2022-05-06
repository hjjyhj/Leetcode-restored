class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for x in range(len(nums)):
            remainder = target - nums[x]
            
            if remainder in nums:
                if x == nums.index(remainder):
                    continue
                else:
                    return [x, nums.index(remainder)]