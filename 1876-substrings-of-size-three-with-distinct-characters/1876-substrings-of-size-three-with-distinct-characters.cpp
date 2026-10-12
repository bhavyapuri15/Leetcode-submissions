class Solution {
public:
    bool check(string a){
        unordered_map<char,int> mp;
        for(auto it:a){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second > 1){
                return false;
            }
        }
        return true;
    }
    int countGoodSubstrings(string s) {
        int l=0;
        int r=2;
        int count =0;
        vector<string> collect;
        while(r<s.length()){
            string b="";
            for(int i=l;i<=r;++i){
                b+=s[i];
            }
            if(check(b)){
                count++;
            }
            r++;
            l++;
        }
        return count;
    }
};