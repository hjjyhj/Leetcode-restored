class Solution:
    def letterCasePermutation(self, s: str) -> List[str]:
        res = [""]
        
        for c in s:
            tmp = []
            if c.isalpha():
                for o in res:
                    tmp.append(o+c.lower())
                    tmp.append(o+c.upper())
            else:
                for o in res:
                    tmp.append(o+c)
            res = tmp
        return res