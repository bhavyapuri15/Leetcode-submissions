class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        vector<int> nge(n);

        for (int i = n - 1; i >= 0; --i) {

            while ((!s.empty()) && (s.top() <= nums[i])) {
                s.pop();
            }

            if (s.empty()) {

                bool found = false;

                for (int j = 0; j < nums.size(); ++j) {

                    if (nums[j] > nums[i]) {
                        nge[i] = nums[j];
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    nge[i] = -1;
                }

            } 
            else {
                nge[i] = s.top();
            }

            s.push(nums[i]);
        }

        for (int j = 0; j < nums.size(); ++j) {

            if (nums[j] > nums[n - 1]) {
                nge[n - 1] = nums[j];
                break;
            }
        }

        return nge;
    }
};