class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n= nums.size();
        int s= 1<<n;

        for(int num=0;num<s;num++){
            vector<int> v;
            for(int i=0;i<n;++i){
                if(num&(1<<i)){
                    v.push_back(nums[i]);
                }
            }
            ans.push_back(v);

        }
        return ans;
    }
};