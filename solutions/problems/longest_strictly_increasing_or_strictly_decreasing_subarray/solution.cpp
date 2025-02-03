class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        int max_inc = -1;
        int max_dec = -1;
        int flag_inc = 1;
        int flag_dec = 1; 
        for(int i=1 ; i<=nums.size()-1 ; i++){
            if(nums[i-1] < nums[i] ){
                flag_inc += 1; 
            }
            if(nums[i-1] >= nums[i] || i == nums.size()-1){
                if(flag_inc > max_inc){
                    max_inc = flag_inc;
                    flag_inc = 1;
                }
                else{
                    flag_inc = 1;
                    continue;
                }
            }
        }
        for(int i=1 ; i<=nums.size()-1 ; i++){
            if(nums[i-1] > nums[i] ){
                flag_dec += 1; 
            }
            if(nums[i-1] <= nums[i] || i == nums.size()-1){
                if(flag_dec > max_dec){
                    max_dec = flag_dec;
                    flag_dec = 1;
                }
                else{
                    flag_dec = 1;
                    continue;
                }
            }
        }
        return max(max_inc , max_dec);
        
    }
};