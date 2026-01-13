class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        vector<int> out;
        for(int i = 1 ; i < pow(num , 0.5) ; i++ ){
            if(num%i == 0){
                sum += i;
                if(i*i != num && i != 1){
                    sum += num/i; 
                }
            }      
        }
        if(sum == num){
                return true;
            } 
        return false;
    }
};