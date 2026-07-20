class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k--){
            int carry = grid.back().back();   
            for(int i = 0; i < grid.size(); ++i){
                rotate(grid[i].rbegin(), grid[i].rbegin() + 1, grid[i].rend());
                
                swap(carry, grid[i][0]);
            }
        }
        return grid;
    }
};