class Solution {
public:
    #define ll long long
    bool is_prime(ll n)
    {
    if(n<2) return false;
    for(ll i=2;i*i<=n;++i) if(n%i==0) return false;
    return true;
    }

    // Sieve of Eratosthenes
    vector<bool> sieve(ll n)
    {
        vector<bool> is_prime(n+1,true);
        is_prime[0]=is_prime[1]=false;
        for(ll i=2;i*i<=n;++i) {
            if(is_prime[i]) {
                for(ll j=i*i;j<=n;j+=i) is_prime[j]=false;
            }
        }
        return is_prime;
    }

    //Prime factorization
    vector<long long> primeFactorization(long long n){
        vector<long long> factorization;
        for(ll d=2;d*d<=n;++d){
            while(n%d==0){
                factorization.push_back(d);
                n/=d;
            }
        }
        if(n>1){
            factorization.push_back(n);
        }
        return factorization;
    }
    int smallestValue(int n) {
        int ans=n;
        while(!(is_prime(n))){
            vector<ll> pf=primeFactorization(n);
            if(n==accumulate(pf.begin(),pf.end(),0)){
                return n;
            }
            n=accumulate(pf.begin(),pf.end(),0);
            ans=min(ans,n);
        }
        return ans;
    }
};