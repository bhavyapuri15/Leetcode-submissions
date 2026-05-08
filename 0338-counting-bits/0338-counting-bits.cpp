class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        while(n>=0){
            int x=n;
            int c=0;
            while(x>0){
                x=(x&(x-1));
                c++;
            }
            v.push_back(c);
            n--;
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};