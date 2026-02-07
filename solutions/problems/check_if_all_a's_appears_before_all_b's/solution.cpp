class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(auto i : s){
            if(i == 'b'){
                flag = true;
            }
            if(i == 'a' && flag == true){
                return false;
            }
        }
        return true;
        
    }
};