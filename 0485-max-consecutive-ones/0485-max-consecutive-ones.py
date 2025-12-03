class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        c=0
        l=[]
        if 1 not in nums:
            return 0
        else :
            for i in nums:
                if i == 1:
                    c=c+1
                    l.append(c)
                if i ==0:
                    c=0
        return max(l)          
