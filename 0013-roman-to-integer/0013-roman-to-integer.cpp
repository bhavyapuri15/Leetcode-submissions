class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;

        for (auto it : s) {
            ans += mp[it];
        }

        for (int i = 0; i < s.length() - 1; ++i) {
            if ((s[i] == 'I' && s[i+1] == 'X') ||
                (s[i] == 'I' && s[i+1] == 'V')) {
                ans -= 2;
            }

            if ((s[i] == 'X' && s[i+1] == 'L') ||
                (s[i] == 'X' && s[i+1] == 'C')) {
                ans -= 20;
            }

            if ((s[i] == 'C' && s[i+1] == 'D') ||
                (s[i] == 'C' && s[i+1] == 'M')) {
                ans -= 200;
            }
        }

        return ans;
    }
};