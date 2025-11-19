class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        c=0
        if num1==0 or num2==0:
            return 0
        while num1 >=0 or num2>=0:
            if num1 > num2:
                num1=num1-num2
                c+=1
            elif num2>num1:
                num2=num2-num1
                c+=1
            elif num1==num2:
                c=c+1
                break
        return c    