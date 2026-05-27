class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> divisors;
        for(int i=1;i<=sqrt(n);++i){
            if(n%i==0){
                divisors.push_back(i);
                if(i*i !=n){
                    divisors.push_back(n/i);
                }
            }
            
        }
        sort(divisors.begin(),divisors.end());
        if(k>divisors.size()){
            return -1;
        }
        else{
            return divisors[k-1];
        }
    }
};