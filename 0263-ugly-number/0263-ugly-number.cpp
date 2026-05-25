class Solution {
public:
    #define ll long long
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
    bool isUgly(int n) {
        if(n<=0) return false;
        vector<ll> ans=primeFactorization(n);
        int c=0;
        for(int i=0;i<ans.size();++i){
            if((ans[i]!=2) && (ans[i]!=3) && (ans[i]!=5)){
                c++;
            }
        }
        if(c>0){
            return false;
        }
        else{
            return true;
        }
    }
};