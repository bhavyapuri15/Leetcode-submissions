class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        long long s=0;
        long long res=1;
        while(n>0){
            if(n%10>0){
                ans+=(n%10)*res;
                s+=n%10;
                res=res*10;
            }
            n=n/10;
            

        }
        return s*ans;
    }
};