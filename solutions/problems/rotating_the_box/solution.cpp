class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();
        vector<vector<char>> out(n , vector<char> (m , '.'));
        int count = 0;
        

        for(int i = 0 ; i < boxGrid.size() ; i++){
            for(int j = 0 ; j < boxGrid[0].size() ;j++){
                if(boxGrid[i][j] == '#'){
                    count++;
                }
                else if(boxGrid[i][j] == '*'){
                    out[j][m-1-i] = '*';
                    while(count != 0){
                        out[j-count][m-1-i] = '#';
                        count--;
                    }
                }
            }
            while(count != 0){
                    out[n-count][m-1-i] = '#';
                    count--;
                }

            
        }
        return out;
    }
};