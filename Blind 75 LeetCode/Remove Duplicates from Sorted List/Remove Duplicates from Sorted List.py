# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(next = head)
        curr = head
        prev = dummy
        dup = set()
        
        while curr:
            if (curr.val in dup):
                prev.next = curr.next
                curr = curr.next
                
            else:
                dup.add(curr.val)
                prev = prev.next
                curr = curr.next
        return dummy.next
                
        