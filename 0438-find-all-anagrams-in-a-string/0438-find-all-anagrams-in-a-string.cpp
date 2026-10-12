class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        vector<int> output;

        for(auto it : p){
            mp[it]++;
        }

        int l=0;
        int r=p.length()-1;

        while(r<s.length()){
            unordered_map<char,int> mp2;

            for(int i=l;i<=r;++i){
                mp2[s[i]]++;
            }

            if(mp2==mp){
                output.push_back(l);
            }

            l++;
            r++;
        }

        return output;
    }
};