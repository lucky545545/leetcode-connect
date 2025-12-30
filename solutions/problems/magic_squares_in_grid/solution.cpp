class Solution {
public:
    bool checker(vector<vector<int>>& grid , int i ,int j){
        vector<int> seen(10, 0);

        int magic_num = grid[i][j] + grid[i][j+1] + grid[i][j+2] ;
        for(int m = i; m < i + 3; m++) {
        int sum_row = 0;
        
        // Inner loop to iterate through the 3 columns of the current row
        for(int k = 0; k < 3; k++) {
            int val = grid[m][j+k];
            
            // 1. Check Range FIRST (Critical for crash prevention)
            if(val < 1 || val > 9) return false;
            
            // 2. Check Duplicates
            if(seen[val] > 0) return false;
            seen[val] = 1;
            
            // 3. Add to row sum
            sum_row += val;
        }
        
        if(sum_row != magic_num) return false;
    }

        for(int n = j ; n < j + 3 ; n++ ){
            int sum_col = grid[i][n] + grid[i+1][n] + grid[i+2][n];
            if(sum_col != magic_num){
                return false;
            }
            sum_col = 0;
        }
        int sum_diag = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
        if(sum_diag != magic_num){
            return false;
        }
        sum_diag = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];
        if(sum_diag != magic_num){
            return false;
            }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 && grid[0].size() < 3){
            return 0;
        }
        int count = 0;
        for(int i = 0 ; i < grid.size() - 2 ; i++){
            for(int j = 0 ; j < grid[0].size() - 2 ; j++){
                if(checker(grid , i , j) == true){
                    count++;
                }
            }
        }
        return count;

        
    }
};