class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        
        int c=0;
        for(auto it:nums){
            if(it==0){
                c++;
            }
        }
        if(c==nums.size()){
            return 0;
        }
        int ans=c;
        for(int i=nums.size()-1;i>=nums.size()-ans;--i){
            if(nums[i]==0){
                c--;
            }
        }
        return c;
    }
};