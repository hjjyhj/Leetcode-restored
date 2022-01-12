# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not head or not head.next:
            return 0
        hMap = {}
        
        hMap[head] = 0
        i=1
        while head:
            head = head.next
            if head in hMap:
                return True
            else:
                hMap[head] = i
            i += 1
        return False
        
        
            