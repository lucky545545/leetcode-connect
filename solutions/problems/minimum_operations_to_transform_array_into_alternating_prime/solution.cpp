class Solution {
public: 
    bool isprime(int n){
        if(n == 1){
            return false;
        }
        
        for(int i = 2 ; i <= sqrt(n) ; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int count = 0;
        bool flag ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i%2 == 0){
                while(!isprime(nums[i])){
                    nums[i] = nums[i] + 1;
                    count++;
                }
            }
            else{
                while(isprime(nums[i])){
                    nums[i] = nums[i] + 1;
                    count++;
                }
            }
        }
        return count;
        
        
    }
};