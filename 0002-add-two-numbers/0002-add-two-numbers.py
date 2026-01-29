# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        p1=0
        p2=0
        sum1=0
        sum2=0
        temp1=l1
        temp2=l2
        while temp1 is not None:
            sum1+=(temp1.val)*(10**p1)
            temp1=temp1.next
            p1+=1
        while temp2 is not None:
            sum2+=(temp2.val)*(10**p2)
            temp2=temp2.next
            p2+=1
        ans=sum1+sum2
        ans=[int(i) for i in str(ans)]
        ans.reverse()

        dummy = ListNode(0)   # dummy head #creating the head of a new ll
        curr = dummy

        for i in ans:
            curr.next = ListNode(i)  # create & link node
            curr = curr.next         # move pointer

        return dummy.next #returning the head after 0
