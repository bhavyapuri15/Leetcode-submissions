class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n;
        n=nums.size();


        map<long , long> freq;

        long long sum = 0;
        long long ans = 0;

        freq[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            ans += freq[sum - k];

            freq[sum]++;
        }

        return ans;
    }
};