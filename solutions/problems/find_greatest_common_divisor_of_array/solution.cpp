class Solution {
public:
    int gcdFinder(int a , int b){
        int divisor = min(a , b);
        int dividend = max(a , b);
        int rem = -1;
        while(rem != 0){
            rem = dividend%divisor;
            dividend = divisor;
            divisor = rem; 
        }
        return dividend;
    }
    int findGCD(vector<int>& nums){
        int max_num = 0;
        int min_num = 1000;
        for(int i : nums){
            max_num = max(i , max_num);
            min_num = min(i , min_num);
        }
        int out = gcdFinder(max_num , min_num);
        return out;

        
    }
};