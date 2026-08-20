class Solution {
public:
    vector<vector<int>> dp;
    vector<int> nums;
    int sum;
    int target;
    int memo(int index , int currSum){
        if(index == nums.size()){
            return currSum == target ? 1 : 0;
        }
        int shiftedSum = currSum + sum;
        if(dp[index][shiftedSum] != -1){
            return dp[index][shiftedSum];
        }

        int add = memo(index+1 , currSum + nums[index]);
        int subtract = memo(index+1 , currSum - nums[index]);

        return dp[index][shiftedSum] = add + subtract;
    }
    int findTargetSumWays(vector<int>& arr, int targetval) {
        nums = arr;
        target = targetval;
        sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }
        if(target < -sum || target > sum){
            return 0;
        }
        dp.assign(nums.size() , vector<int> (2*sum+1 , -1));
        return memo(0 , 0);
    }
};