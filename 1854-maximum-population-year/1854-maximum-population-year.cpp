class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {

        map<int,int> m;

        for(auto &x : logs){
            m[x[0]]++;   // birth increases population
            m[x[1]]--;   // death year excluded
        }

        int mx = 0;
        int ans = 0;
        int curr = 0;

        for(auto &[year, val] : m){
            curr += val;

            if(curr > mx){
                mx = curr;
                ans = year;
            }
        }

        return ans;
    }
};