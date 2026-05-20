class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int l = 0;
        int currSum = 0;
        int ans = 0;

        for (int r = 0; r < nums.size(); ++r) {

            while (st.count(nums[r])) {
                st.erase(nums[l]);
                currSum -= nums[l];
                l++;
            }

            st.insert(nums[r]);
            currSum += nums[r];

            ans = max(ans, currSum);
        }

        return ans;
    }
};