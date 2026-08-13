class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int bestdiff = INT_MAX;
        int bestsum =0;
        for(int i = 0 ; i < nums.size()-2 ; i++){
            int j = i + 1;
            int k = nums.size()-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k]; //[-4 , -1 , 1 , 2]
                int currentdiff = abs(sum - target);
                if(currentdiff < bestdiff){
                    bestdiff = currentdiff;
                    bestsum = sum;
                }
                if(sum > target){
                    k--;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    return sum;
                }
            }
        }
        return bestsum;
    }
};