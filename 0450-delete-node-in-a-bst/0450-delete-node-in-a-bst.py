# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        #step-1 : find the node to be deleted and its parent:
        curr = root
        parent = None
        while curr and curr.val !=key:
            parent=curr
            if curr.val>key:
                curr=curr.left
            else:
                curr=curr.right    
        if curr is None:
            return root  
        #case2: if 2 childnodes:
        if curr.left and curr.right:
            succ_parent=curr #keep track of parent of successor
            succ=curr.right #successor will be in thr right subtree

            #successor is the leftmost node of the right subtree
            #make successor the leftmost element
            while succ.left:
                succ_parent=succ
                succ=succ.left
            curr.val=succ.val #copy succ to the node to be deleted

            parent = succ_parent
            curr = succ

            #replace old data by its succ counterparts      
        #case 1: <= 1 child nodes

        child = curr.left if curr.left is not None else curr.right

        #deletion of the node:
        if parent is None:
            return child
        if parent.left==curr:
            parent.left=child
        else:
            parent.right=child

        
        return root

