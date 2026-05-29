class Solution {
public:
    int minElement(vector<int>& nums) {
        
        for(int i=0;i<nums.size();++i){
            int sum=0;
            while(nums[i]>0){
                sum+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
            nums[i]=sum;
        }
        int ans=*min_element(nums.begin(),nums.end());
        return ans;
    }
};