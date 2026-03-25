class Solution {
public:
    bool isPalindrome(string p) {
        int i = 0;
        int j = p.size() - 1;
        while(i < j){
            if(!isalnum(p[i])){
                i++;
            }
            else if(!isalnum(p[j])){
                j--;
            }
            else{
                if(tolower(p[i]) != tolower(p[j])){
                    return false;
                }
                i++;
                j--;
            }

        }
        return true;
        
    }
};