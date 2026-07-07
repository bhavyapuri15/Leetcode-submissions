class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[0] != b[0] ? a[0] < b[0] : a[1] > b[1];
        });
        int count = 0, prevEnd = 0;
        for (auto& iv : intervals) {
            if (iv[1] > prevEnd) {   
                ++count;
                prevEnd = iv[1];
            }
            
        }
        return count;
    }
};