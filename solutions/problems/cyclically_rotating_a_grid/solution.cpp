class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int layers = min(m , n)/2;
        for(int i = 0 ; i < layers ; i++ ){
            int current_m = m - (2 * i);
            int current_n = n - (2 * i);
            int perimeter = (current_m * 2) + (current_n * 2) - 4;
            int rotations = k % perimeter;
            while(rotations != 0){
                int temp = grid[i][i];
                for(int j=i ; j < n-i-1; j++){
                    grid[i][j] = grid[i][j+1];
                }
                for(int p = i ; p < m-i-1 ; p++){
                    grid[p][n-i-1] = grid[p+1][n-i-1];
                }
                for(int l = n-i-1 ; l > i ; l--){
                    grid[m-i-1][l] = grid[m-i-1][l-1];
                }
                for(int o = m-i-1 ; o > i+1 ; o--){
                    grid[o][i] = grid[o-1][i]; 
                }
                grid[i+1][i] = temp;
                rotations--;
            }
        }
        return grid;
    }
};