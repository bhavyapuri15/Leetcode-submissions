class Solution {
public:
    #define ll long long
    bool is_prime(ll n)
{
    if(n<2) return false;
    for(ll i=2;i*i<=n;++i) if(n%i==0) return false;
    return true;
}
    int countPrimes(int n) {
        vector<bool> is_primee(n+1,true);
    is_primee[0]=is_primee[1]=false;
    for(ll i=2;i*i<=n;++i) {
        if(is_primee[i]) {
            for(ll j=i*i;j<=n;j+=i) is_primee[j]=false;
        }
    }
    int c=0;
    for(int i=0;i<is_primee.size();++i){
        if (is_primee[i]==true) c++;
    }
    if(is_prime(n)) c--;
    return c;
    }
};