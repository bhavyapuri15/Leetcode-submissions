class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    if (arr.empty()) return {};          
    vector<int> a = arr;
    vector<int> b = arr;
    sort(a.begin(), a.end());
    int count = 1;
    b[0] = 1;
    for (int i = 1; i < (int)a.size(); ++i) {   
        if (a[i] == a[i-1]) b[i] = count;
        else                b[i] = ++count;
    }
    map<int,int> mp;
    for (int i = 0; i < (int)a.size(); ++i) mp[a[i]] = b[i];
    for (int i = 0; i < (int)arr.size(); ++i) arr[i] = mp[arr[i]];
    return arr;
}
};