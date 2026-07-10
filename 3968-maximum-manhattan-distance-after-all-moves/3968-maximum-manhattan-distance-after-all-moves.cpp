class Solution {
public:
    int maxDistance(string moves) {
        int x=0;
        int y=0;
        int c=0;
        for(auto it:moves){
            if(it=='L'){
                x=x-1;
            }
            else if(it=='U'){
                y+=1;
            }
            else if(it=='D'){
                y=y-1;
            }
            else if(it=='R'){
                x+=1;
            }
            else{
                c++;
            }
        }
        return abs(x) + abs(y)+c;
    }
};