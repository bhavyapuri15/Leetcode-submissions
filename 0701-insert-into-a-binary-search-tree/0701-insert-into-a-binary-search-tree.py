# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if root is None:
            root=TreeNode(val)
            return root
        current = root
        while(current):    
            if val>current.val:
                if current.right is not None:
                    current=current.right
                else:
                    current.right=TreeNode(val)
                    break
            else:
                if current.left is not None:
                    current=current.left
                else:
                    current.left=TreeNode(val)    
                    break
        return root