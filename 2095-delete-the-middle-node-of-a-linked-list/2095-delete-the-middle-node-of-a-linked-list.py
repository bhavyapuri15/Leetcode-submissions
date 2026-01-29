# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None:
            return None
        temp=head
        count=0
        while temp is not None:
            temp=temp.next
            count+=1
        middle = count//2

        pos=0
        temp2=head
        while temp2 is not None:
            if pos==middle-1:
                front = temp2.next.next
                temp2.next=front
                
                break
            temp2=temp2.next  
            pos+=1  
        return head    