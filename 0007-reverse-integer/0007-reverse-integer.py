class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        x = abs(x)
        reversed_x = 0
        while x > 0:
            reversed_x = reversed_x * 10 + x % 10
            x //= 10
        result = sign * reversed_x
        if result < -2**31 or result > 2**31 - 1:
            return 0
        
        return result