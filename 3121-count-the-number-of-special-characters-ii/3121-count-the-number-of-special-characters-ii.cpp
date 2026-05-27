class Solution {
public:
    int numberOfSpecialChars(string word) {
            int c=0;

            unordered_map<char,int> mp1;
            unordered_map<char,int> mp2;

            for(int i=0;i<word.length();i++){

                if(islower(word[i]))
                    mp1[word[i]]=i;          

                else if(!mp2.count(word[i]))
                    mp2[word[i]]=i;         
            }

            for(auto val:mp1){

                if(mp2.contains(val.first-32) && mp2[val.first-32] > val.second)
                {
                    c++;
                }
            }

            return c;
    }
};