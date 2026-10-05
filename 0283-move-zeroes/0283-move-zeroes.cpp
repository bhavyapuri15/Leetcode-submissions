class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        int k=j+1;
        while(k<n){
            if(nums[k]!=0 && nums[j]==0){
                swap(nums[k],nums[j]);
                k++;
                j++;
            }
            else{
                k++;
            }
            
        }
    }
};