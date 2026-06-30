class Solution:
    def processStr(self, s: str) -> str:
        ans=""
        for i in s:
            if(ord(i)>=97 and ord(i)<=122):
                ans=ans+i
            elif(i=='*'):
                if(len(ans)>0):
                    l=[x for x in ans]
                    l.pop()
                    ans=''.join(l)
            elif(i=='#'):
                ans=ans+ans
            else:
                ans=ans[::-1]
        return ans