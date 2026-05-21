class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans=0;
        int maxx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<k;++i){
            ans+=maxx;
            maxx++;
        }
        return ans;
    }
};