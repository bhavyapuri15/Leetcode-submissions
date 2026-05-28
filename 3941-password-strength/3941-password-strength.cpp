class Solution {
public:
    int passwordStrength(string password) {
        int s = 0;

        set<char> st;

        for(auto val : password) {
            st.insert(val);
        }

        for(auto vl : st) {

            if(vl >= 97 && vl <= 122) {
                s += 1;
            }

            if(vl >= 65 && vl <= 90) {
                s += 2;
            }

            if(vl >= 48 && vl <= 57) {
                s += 3;
            }

            if(vl == 33 || vl == 35 || vl == 36 || vl == 64) {
                s += 5;
            }
        }

        return s;
    }
};