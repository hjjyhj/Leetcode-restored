class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s2, t2 = [], []
        
        for char in s:
            if char == "#":
                if s2: s2.pop()
            else:
                s2.append(char)
        for char in t:
            if char == "#":
                if t2: t2.pop()
            else:
                t2.append(char)
        return s2==t2