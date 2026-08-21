class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        if(m <= 1 && n <= 1 ){
            board[0][0] = 0;
            return;
        }
        vector<vector<int>> out(m , vector<int> (n,0));
        for(int i = 0 ; i < m  ; i++){
            for(int j = 0 ; j < n ; j++){
                int liveN = 0;
                if (m == 1 && n == 1) {
                    liveN = 0;
                }
                else if (m == 1) {
                    if (j > 0) {
                        liveN += board[i][j - 1];
                    }

                    if (j < n - 1) {
                        liveN += board[i][j + 1];
                    }
                }

                // Only one column
                else if (n == 1) {
                    if (i > 0) {
                        liveN += board[i - 1][j];
                    }

                    if (i < m - 1) {
                        liveN += board[i + 1][j];
                    }
                }
                else if(i == 0 && j == 0){
                    liveN = board[i][j+1]+board[i+1][j+1]+board[i+1][j];
                }
                else if(i == 0 && j != 0 && j != n-1){
                    liveN = board[i][j+1]+board[i+1][j+1]+board[i+1][j]+board[i][j-1]+board[i+1][j-1];
                }
                else if(i == 0 && j == n-1){
                    liveN = board[i+1][j]+board[i][j-1]+board[i+1][j-1];
                }
                else if(i != 0 && j == n-1 && i != m-1){
                    liveN = board[i-1][j]+board[i-1][j-1]+board[i+1][j]+board[i][j-1]+board[i+1][j-1];
                }
                else if(i == m-1 && j == n-1){
                    liveN = board[i][j-1]+board[i-1][j]+board[i-1][j-1];
                }
                else if(i == m-1 && j != 0 && j != n-1 ){
                    liveN = board[i][j-1]+board[i-1][j]+board[i-1][j-1]+board[i-1][j+1]+board[i][j+1];
                }
                else if(i == m-1 && j == 0){
                    liveN = board[i-1][j]+board[i-1][j+1]+board[i][j+1];
                }
                else if(i != 0 && i != m-1 && j == 0){
                    liveN = board[i-1][j]+board[i-1][j+1]+board[i][j+1]+board[i+1][j+1]+board[i+1][j];
                }
                else{
                    liveN = board[i][j-1]+board[i][j+1]+board[i+1][j]+board[i+1][j+1]+board[i+1][j-1]+board[i-1][j]+board[i-1][j-1]+board[i-1][j+1];
                }
                if(board[i][j] == 1){
                    if(liveN < 2 || liveN > 3){
                        out[i][j] = 0;
                    }
                    else{
                        out[i][j] = 1;
                    }
                }
                else if(board[i][j] == 0){
                    if(liveN == 3){
                        out[i][j] = 1;
                    }
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                board[i][j] = out[i][j];
            }
        }
    }
};