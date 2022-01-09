class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(item for item in s if item.isalnum())
        s = ''.join(s.split())
        s = s.lower()
        print(s)
        
        return s == s[::-1]