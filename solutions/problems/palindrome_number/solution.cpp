class Solution {
public:
    bool isPalindrome(int x) {
        double s = 0;int b;int c = x;
        if(x<0){
            return false;
        }
        for(int i ; x!=0 ; i++){
            b = x%10;
            x = x/10;
            s = s*10 + b; 
        }
        if(s==c){
            return true;
        }
        else{
            return false;
        }

        
    }
};