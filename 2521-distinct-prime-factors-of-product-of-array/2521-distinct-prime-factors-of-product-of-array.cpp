class Solution {
public:

    set<int> s;

    void primeFactorization(int n) {

        for(int d=2; d*d<=n; ++d) {

            while(n % d == 0) {
                s.insert(d);
                n /= d;
            }
        }

        if(n > 1) s.insert(n);
    }

    int distinctPrimeFactors(vector<int>& nums) {

        for(int v : nums) {
            primeFactorization(v);
        }

        return s.size();
    }
};