class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row_no; 
        unordered_set<int> column_no;
        int n = matrix.size(); // number of rows
        int m = matrix[0].size(); // number of columns
        for(int i=0 ; i<n ; i++ ){
            for(int j=0 ; j<m ; j++){
                if(matrix[i][j] == 0){
                    row_no.insert(i);
                    column_no.insert(j);
                    }
                   
                }
            }
        for(int i=0 ; i<n ; i++ ){
            for(int j=0 ; j<m ; j++){
                if(row_no.count(i) > 0 || column_no.count(j) > 0){
                    matrix[i][j] = 0;
                    }
                   
                }
            }
        return matrix;
        
    }
};