class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        vector<long long> as;
        vector<long long> ds;
        
        int x = nums.size() - 1; 
        for(int i = 0; i < nums.size(); ++i){
            if(i != 0 && nums[i] < nums[i-1]){
                x = i - 1;
                break;
            }
            as.push_back(nums[i]);
        }
        
        for(int j = x; j < nums.size(); ++j){
            ds.push_back(nums[j]);
        }
        
        
        long long a = accumulate(as.begin(), as.end(), 0LL);
        long long d = accumulate(ds.begin(), ds.end(), 0LL);
        
        if(a > d){
            return 0;
        }
        else if(d > a){
            return 1;
        }
        else {
            return -1;
        }
    }
};