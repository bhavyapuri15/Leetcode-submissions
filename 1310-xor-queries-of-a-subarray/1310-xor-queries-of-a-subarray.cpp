class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> pre(n);
        pre[0]=arr[0];
        vector<int> ans;
        for(int i=1;i<n;++i){
            pre[i]=pre[i-1]^arr[i];
        }
        

        for(int i=0;i<queries.size();++i){
            ans.push_back(pre[queries[i][1]]^(queries[i][0]==0 ? 0 : pre[queries[i][0]-1] ));
        }
        return ans;

    }
};