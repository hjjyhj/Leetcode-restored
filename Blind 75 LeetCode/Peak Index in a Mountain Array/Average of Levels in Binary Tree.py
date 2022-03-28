# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        res = []
        
        def bfs(node, level):
            if node:
                if len(res) == level:
                    res.append([])
                res[level] += [node.val]
                bfs(node.left, level+1)
                bfs(node.right, level+1)
        bfs(root, 0)
        return [sum(i)/len(i) for i in res]
        
        