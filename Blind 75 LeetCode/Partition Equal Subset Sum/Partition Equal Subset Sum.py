class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if sum(nums) % 2 == 1:
            return False
        dp = set()
        dp.add(0)
        target = sum(nums) // 2
        
        for i in range(len(nums)-1, -1, -1):
            dp2 = set()
            for t in dp:
                dp2.add(t)
                dp2.add(t + nums[i])
            dp = dp2
        return True if target in dp else False