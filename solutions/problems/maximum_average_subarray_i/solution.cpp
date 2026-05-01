class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_avg;
        double max_avg;
        double curr_sum = 0;
        for( int i = 0 ; i < nums.size() ; i++){
            curr_sum += nums[i];
            if(i == k-1){
                max_avg = curr_sum/k;
            }
            if(i >= k){
                curr_sum = curr_sum - nums[i - k];
                curr_avg = curr_sum/k;
                max_avg = max(max_avg , curr_avg);
            } 
        }
        return max_avg;
    }
};