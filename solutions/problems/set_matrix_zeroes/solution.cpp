class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row_set;
        unordered_set<int> col_set;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0){
                    row_set.insert(i);
                    col_set.insert(j);
                }
            }
        }
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(row_set.count(i) > 0 || col_set.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
        return matrix;
    }
};