# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if head is None or head.next is None:
            return None

        temp = head
        count = 0
        while temp is not None:
            temp = temp.next
            count += 1

        pos = (count - n) + 1

        # 🔴 FIX: deleting head
        if pos == 1:
            return head.next

        pos1 = 1
        temp2 = head
        while temp2 is not None:
            if pos1 == pos - 1:
                front = temp2.next.next
                temp2.next = front
                break
            temp2 = temp2.next
            pos1 += 1

        return head
