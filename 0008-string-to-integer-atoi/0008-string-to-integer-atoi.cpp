class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        int n = s.length();

        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check sign
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        long long ans = 0;

        // Read digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {

            ans = ans * 10 + (s[i] - '0');

            // Overflow check
            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return ans * sign;
    }
};