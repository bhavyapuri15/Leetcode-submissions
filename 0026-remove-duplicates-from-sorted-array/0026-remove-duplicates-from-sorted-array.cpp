class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int d = 0;
        map<int, int> mp;

        for (int i = 0; i < nums.size(); ++i) {
            mp[nums[i]]++;
        }

        for (auto it : mp) {
            d += it.second - 1;
        }

        int j = 0;
        for (auto it : mp) {
            nums[j] = it.first;
            j++;
        }

        for (int i = 0; i < d; ++i) {
            nums.pop_back();
        }

        return nums.size();
    }
};