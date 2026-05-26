class Solution {
public:
    int numberOfSpecialChars(string word) {
        int c=0;
        sort(word.begin(),word.end());
        set<char> s;
        for(auto v:word){
            s.insert(v);
        }
        for(auto it:s){
            if(97<=it<122){
                if(s.contains(it-32)){
                    c++;
                }
            }
        }
        return c;
    }
};