class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLen = 0
        ansSet = set()
        left = 0
        
        for right in range(len(s)):
            while s[right] in ansSet:
                ansSet.remove(s[left])
                left += 1
            ansSet.add(s[right])
            maxLen = max(maxLen, right - left + 1)
        return maxLen
    