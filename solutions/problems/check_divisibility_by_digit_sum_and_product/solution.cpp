class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int given = n;
        while(n > 0){
            int digit = n%10;
            sum += digit;
            prod *= digit;
            n = n/10;
        }
        if(given%(sum+prod) == 0){
            return true;
        }
        return false;

        
    }
};