class Solution {
public:
    bool checkGoodInteger(int n) {
        int digsum = 0 ;
        int squaresum = 0 ;
        while(n > 0){
            int dig = n%10;
            int next = n/10;
            n = next;
            digsum += dig;
            squaresum = squaresum + dig*dig;
        }
        if(squaresum - digsum >= 50){
            return true;
        }
        return false;
    }
};