class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        x=[]
        y=[]
        z=[]
        for i in nums:
            if i >0:
                x.append(i)
            elif i<0:
                y.append(i)
        for i in range(len(x)):
            z.append(x[i])
            z.append(y[i])
        return z