class Solution:
    def reverseWords(self, s: str) -> str:
        x=s.strip()
        y=x.split(' ')
        z=[i for i in y if i!=''] #use list comprehension to exclude/include stuff from a list/string
        z.reverse()
        k = ' '.join(z)
        return k
       