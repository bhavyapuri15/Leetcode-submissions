class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left=0
        ans=0
        x=0

        for right in range(len(s)):
            if len(set(s[left:right+1]))==len(s[left:right+1]):
                ans=max(ans,len(s[left:right+1]))

            else:
                left+=1
        return ans
        