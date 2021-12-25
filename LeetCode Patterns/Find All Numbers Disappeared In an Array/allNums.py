class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        return set(set(range(1, len(nums)+1)) - set(nums))