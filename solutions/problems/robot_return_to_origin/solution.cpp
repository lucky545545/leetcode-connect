class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> out(4 , 0);
        for(auto i : moves){
            if(i == 'U'){
                out[0]++;
            }
            else if(i == 'D'){
                out[1]++;
            }
            else if(i == 'L'){
                out[2]++;
            }
            else{
                out[3]++;
            }
        }
        if(out[0] - out[1] == 0 && out[2] - out[3] == 0){
            return true;
        }
        return false;
        
    }
};