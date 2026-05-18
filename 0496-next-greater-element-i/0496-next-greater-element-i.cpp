class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums2.size();
        stack<int> st;
        vector<int> nge(n);

        for(int i = n - 1; i >= 0; --i){
            while(!st.empty() && nums2[i] >= st.top()){
                st.pop();
            }

            if(st.empty()){
                nge[i] = -1;
            }
            else{
                nge[i] = st.top();
            }

            st.push(nums2[i]);
        }

        

        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();++i){
            mp[nums2[i]]=nge[i];
        }
        int n1=nums1.size();
        vector<int> ans(n1);
        for(int i=0;i<n1;++i){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};