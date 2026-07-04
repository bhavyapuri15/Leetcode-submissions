class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=nums[n/2];
        int c=count(nums.begin(),nums.end(),mid);
        if(c==1){
            return true;
        }
        else{
            return false;
        }
    }
};