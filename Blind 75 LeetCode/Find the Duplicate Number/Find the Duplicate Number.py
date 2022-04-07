class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        elements = set()
        for x in nums:
            if x in elements: return x
            elements.add(x)