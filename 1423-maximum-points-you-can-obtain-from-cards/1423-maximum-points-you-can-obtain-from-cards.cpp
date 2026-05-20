class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int total = 0;
        for (int x : cardPoints) total += x;

        if (k == n) return total;

        int windowSize = n - k;

        int curr = 0;
        for (int i = 0; i < windowSize; ++i) {
            curr += cardPoints[i];
        }

        int mini = curr;

        for (int i = windowSize; i < n; ++i) {
            curr += cardPoints[i];
            curr -= cardPoints[i - windowSize];

            mini = min(mini, curr);
        }

        return total - mini;
    }
};