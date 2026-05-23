class Solution {
public:

    bool isOperator(string s) {
        return s == "+" || s == "-" ||
               s == "*" || s == "/";
    }

    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(string token : tokens) {

            if(isOperator(token)) {

                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if(token == "+") st.push(a + b);
                else if(token == "-") st.push(a - b);
                else if(token == "*") st.push(a * b);
                else st.push(a / b);
            }
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};