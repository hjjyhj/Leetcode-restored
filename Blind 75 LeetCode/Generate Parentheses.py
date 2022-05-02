class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        stack = []
        res = []
        
        def backtracking(op, cl):
            if op == cl == n:
                res.append("".join(stack))
            if op < n:
                stack.append("(")
                backtracking(op+1, cl)
                stack.pop()
            if op > cl:
                stack.append(")")
                backtracking(op, cl+1)
                stack.pop()
        
        backtracking(0, 0)
        return res
                