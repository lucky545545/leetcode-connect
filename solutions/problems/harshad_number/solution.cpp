class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0; int t = x;
        for(int i = 0 ; t>0 ; i++ ){
            sum += t%10;
            t = t/10;    
        }
        if(x%sum == 0){
            return sum;
        }
            return -1;}
};