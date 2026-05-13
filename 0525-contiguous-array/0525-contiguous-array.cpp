class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // vector<int> pre(n);
        // pre[0]=nums[0];

        // for(int i=0;i<nums.size();++i){
        //     pre[i]=pre[i-1]+nums[i];
        // }
        

        int sum=0;
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                sum-=1;
            }
            else{
                sum+=1;
            }

            if(sum==0){
                ans=max(ans,i+1);
            }
            else{
                if(mp.find(sum)!=mp.end()){
                    ans=max(ans,i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }

        }
        return ans;
    }
};