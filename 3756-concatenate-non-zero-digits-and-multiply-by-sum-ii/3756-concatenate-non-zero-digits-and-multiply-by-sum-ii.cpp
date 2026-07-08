class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const long long MOD = 1e9 + 7;
        int n = s.size();

        vector<long long> f(n + 1, 0), sd(n + 1, 0), pow10(n + 1, 1);
        vector<int> nz(n + 1, 0);

        for (int i = 1; i <= n; ++i) pow10[i] = pow10[i - 1] * 10 % MOD;

        for (int k = 1; k <= n; ++k) {
            int d = s[k - 1] - '0';
            if (d != 0) {
                f[k]  = (f[k - 1] * 10 + d) % MOD;
                nz[k] = nz[k - 1] + 1;
                sd[k] = sd[k - 1] + d;
            } else {
                f[k]  = f[k - 1];
                nz[k] = nz[k - 1];
                sd[k] = sd[k - 1];
            }
        }

        vector<int> ans(queries.size());
        for (int i = 0; i < (int)queries.size(); ++i) {
            int l = queries[i][0], r = queries[i][1];
            int c = nz[r + 1] - nz[l];
            long long sm = sd[r + 1] - sd[l];
            long long a = ((f[r + 1] - f[l] * pow10[c]) % MOD + MOD) % MOD;
            ans[i] = (int)(a * sm % MOD);
        }
        return ans;
    }
};