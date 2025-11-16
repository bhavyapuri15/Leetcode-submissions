class Solution:
    def addDigits(self, num: int) -> int:
        x = sum(int(a) for a in str(num))
        while len(str(x)) > 1:
            x = sum(int(k) for k in str(x))
        return x    