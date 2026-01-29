# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        stack = []
        temp = head

        # Step 1: push data into stack
        while temp:
            stack.append(temp.val)
            temp = temp.next

        temp = head

        # Step 2: pop and overwrite
        while temp:
            temp.val = stack.pop()
            temp = temp.next

        return head