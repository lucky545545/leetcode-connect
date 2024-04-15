class Solution {
public:
    int divide(int dividend, int divisor) {
        int r;
        if(dividend>2147483647 || dividend==-2147483648 && divisor == -1 ){
            return 2147483647;
        }
        else if(dividend<(-2147483648)){
            return -2147483648;
        }
        else{
            r = dividend/divisor;
            return r;
        }
    }
};