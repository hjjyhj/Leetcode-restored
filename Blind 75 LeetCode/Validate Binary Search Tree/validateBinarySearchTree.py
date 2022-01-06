# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        
        def BST(node, left, right):
            if not node:
                return True
            if not (left < node.val and node.val < right):
                return False
            return BST(node.left, left, node.val) and BST(node.right, node.val, right)
        
        return BST(root, float("-inf"), float("inf"))
            