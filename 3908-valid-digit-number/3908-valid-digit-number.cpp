class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int> y;
        if(n==0) return false;
        while(n>0){
            y.push_back(n%10);
            n=n/10;
        }
        reverse(y.begin(),y.end());
        if(y[0]==x) return false;
        for(int i=1;i<y.size();++i){
            if(y[i]==x){
                return true;
            }
        }
        return false;
    }
};