class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> mp;

        for (int i = 0; i < nums.size(); ++i) {
            mp.insert(nums[i]);
        }

        int c = 1;
        int curr = 1;
        int m = *mp.begin();

        for (auto it = next(mp.begin()); it != mp.end(); ++it) {
            if (*it == m + 1) {
                curr++;
            } else {
                curr = 1;
            }

            c = max(c, curr);
            m = *it;
        }

        return c;
    }
};