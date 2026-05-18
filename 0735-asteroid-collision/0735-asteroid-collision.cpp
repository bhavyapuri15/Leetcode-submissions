class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;
        int n = asteroids.size();

        for(int i = n - 1; i >= 0; --i){

            if(asteroids[i] < 0){
                st.push(asteroids[i]);
            }

            else{

                while(!st.empty() && st.top() < 0 &&
                      abs(asteroids[i]) > abs(st.top())){
                    st.pop();
                }

                if(st.empty() || st.top() > 0){
                    st.push(asteroids[i]);
                }

                else if(abs(asteroids[i]) == abs(st.top())){
                    st.pop();
                }
            }
        }

        vector<int> ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        

        return ans;
    }
};