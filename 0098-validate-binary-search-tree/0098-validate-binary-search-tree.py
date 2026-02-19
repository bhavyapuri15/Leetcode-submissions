# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        ans=[]
        def inorder(node):
            if node is None:
                return
            inorder(node.left)
            ans.append(node.val)    
            inorder(node.right)
        inorder(root)

        if ans==sorted(ans) and len(set(ans))==len(sorted(ans)):
            return True
        else:
            return False            