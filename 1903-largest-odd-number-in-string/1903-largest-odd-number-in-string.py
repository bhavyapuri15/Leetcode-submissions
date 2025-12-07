class Solution:
    def largestOddNumber(self, num: str) -> str:
        num=list(num)

        for i in range(len(num)-1,-1,-1):
            if int(num[i])%2 !=0:
                break
            elif int(num[i]) % 2 == 0:
                num.pop(i)
        x=''.join(num)
        return x