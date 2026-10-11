class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        vector<int> o;
        o.push_back(1);
        output.push_back(o);
        int n=numRows;
        for(int i=2;i<=n;++i){
            vector<int> v(i);
            v[0] = 1;
            v[i-1] = 1;
            for (int j = 1; j < i-1; ++j) {
                v[j] = output[i-2][j-1] + output[i-2][j];
            }
            output.push_back(v);

        }
        return output;
    }
};