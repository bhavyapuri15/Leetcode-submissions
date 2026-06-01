class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        reverse(cost.begin(),cost.end());
        if(cost.size()<=2){
            return accumulate(cost.begin(),cost.end(),0);
        }
        int cos=0;
        for(int i = 0; i < cost.size(); i++) {
            if(i % 3 != 2) cos += cost[i];
        }
        return cos;
    }
    
};