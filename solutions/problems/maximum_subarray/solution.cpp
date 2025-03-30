class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0;
        int max_sum = INT_MIN;
        int i = 0;
        for(int i = 0; i< nums.size() ; i++){
            cur_sum = cur_sum + nums[i];
            
            
            if(max_sum < cur_sum){
                max_sum = cur_sum;
            }
            if(cur_sum < 0){
                cur_sum = 0;
            }
        }

        
        return max_sum; 
    }
};