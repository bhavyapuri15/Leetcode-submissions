# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if head is None:
            return None
        if head.next is None:
            return head
        if head.next.next is None:
            return head.next    
        temp = head
        length=0
        while temp is not None:
            temp=temp.next
            length+=1

        count=0
        temp2=head
        while temp2 is not None:
            if count==length//2:
                break
            temp2=temp2.next    
            count+=1

        return temp2