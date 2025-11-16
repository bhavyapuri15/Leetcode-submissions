class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        x = s.strip()
        x = x.split(' ')
        return len(x[-1])
        