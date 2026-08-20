class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> mp(m , vector<int> (n , -1));
        mp[m-1][n-1] = 0;
        for(int i = 0; i < m ; i++){
            mp[i][n-1] = 1;
        }
        for(int j = 0 ; j < n ; j++){
            mp[m-1][j] = 1;
        }
        for(int i = m-2 ; i >= 0 ; i--){
            for(int j = n-2 ; j >= 0 ; j--){
                mp[i][j] = mp[i+1][j] + mp[i][j+1];
            }
        }
        return mp[0][0];
    }
};