class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> nse(n);
        vector<int> ans(n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top()>prices[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i]=-1;
            }
            else{
                nse[i]=st.top();
            }
            st.push(prices[i]);
        }
        for(int i=0;i<n;++i){
            ans[i]=nse[i]==-1 ? prices[i] : abs(prices[i]-nse[i]);
        }
        return ans;
    }
};