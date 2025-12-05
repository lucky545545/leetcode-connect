class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum_l = 0 ;
        int total = 0 ;
        int diff  = 0 ;
        int count = 0 ;
        for(int i = 0 ; i< nums.size() ; i++){
            total = total + nums[i];
        }
        for(int i = 0 ; i< nums.size()-1 ; i++){
            sum_l = sum_l + nums[i];
            diff = total - 2*sum_l;
            if(diff%2 == 0){
                count++;
            }
            
        }
        return count;

        
    }
};