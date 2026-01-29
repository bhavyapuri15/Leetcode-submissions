# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        l=[]
        temp=head
        while temp is not None:
            l.append(str(temp.val))
            temp=temp.next
        x=''.join(l) 
        if x==x[::-1]:
            return True
        else:
            return False      