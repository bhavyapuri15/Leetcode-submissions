class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    long long ans = 1LL * (nums.back() - nums[0]) * k;
    return ans;
        
    }

};