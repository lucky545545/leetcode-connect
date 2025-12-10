class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp = 0;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = i+1 ; j < matrix.size() ; j++){
                if( i == j){
                    continue;
                }
                else{
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }

            }

        }
        for(int k = 0 ; k < matrix.size() ; k++){
            reverse(matrix[k].begin() , matrix[k].end());
        }

        
        
    }
};