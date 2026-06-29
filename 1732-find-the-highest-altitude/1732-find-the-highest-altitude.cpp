class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>pre(n+1);
        pre[0]=0;
        pre[1]=gain[0];
        for(int i=2;i<pre.size();++i){
            pre[i]=pre[i-1]+gain[i-1];
        }
        int ans=*max_element(pre.begin(),pre.end());
        return ans;
    }
};