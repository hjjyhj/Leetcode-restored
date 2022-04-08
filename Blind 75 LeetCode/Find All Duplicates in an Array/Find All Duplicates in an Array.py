class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        res = []
        dup = set()
        
        for x in nums:
            if x in dup:
                res.append(x)
            dup.add(x)
        return res