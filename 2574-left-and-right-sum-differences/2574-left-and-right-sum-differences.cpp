class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;++i){
            pref[i]=pref[i-1]+nums[i];
        }
        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + nums[i];
        }

        vector<int> ans(n);
        for(int i=0;i<n;++i){
            ans[i]=abs(pref[i]-suffix[i]);
        }
        return ans;


    }
};