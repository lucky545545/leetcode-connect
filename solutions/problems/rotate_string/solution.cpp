class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        int start;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = 0 ; j < s.size() ; j++){
                if(s[j] != goal[(i+j)%s.size()]){
                    break;
                }
                if(j == s.size() - 1){
                    return true;
                }
            }
        }
        return false;
    }
};