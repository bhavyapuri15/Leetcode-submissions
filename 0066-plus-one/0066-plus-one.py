class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        x =''.join(str(a) for a in digits)
        x = int(x)
        x+=1
        x = str(x)
        x = list(map(int,str(x)))
        return x