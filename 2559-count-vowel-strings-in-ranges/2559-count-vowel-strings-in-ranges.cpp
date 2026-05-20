class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
            vector<int> arr(n);

            for (int i = 0; i < n; ++i) {
                int x = words[i].length() - 1;

                if (string("aeiou").find(words[i][0]) != string::npos &&
                    string("aeiou").find(words[i][x]) != string::npos) {

                    arr[i] = 1;
                }
                else {
                    arr[i] = 0;
                }
            }

            vector<int> pre(n);
            pre[0] = arr[0];

            for (int i = 1; i < n; ++i) {
                pre[i] = pre[i - 1] + arr[i];
            }

            vector<int> ans;

            for (int i = 0; i < queries.size(); ++i) {

                int l = queries[i][0];
                int r = queries[i][1];

                int cnt = pre[r] - (l == 0 ? 0 : pre[l - 1]);

                ans.push_back(cnt);
            }

            return ans;

    }
};