class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size() == 1){
            return {0};
        }
        int n = nums.size();
        vector<int> prefsum(n , 0);
        vector<int> suffsum(n , 0);
        vector<int> ans(n , 0);
        int sum = 0 ;
        for(int i = 1 ; i < n ; i++){
            prefsum[i] = prefsum[i-1] + nums[i-1];
        }
        sum = 0;
        for(int i = n-2 ; i >= 0 ; i--){
            suffsum[i] = suffsum[i+1] + nums[i+1];
        }
        for(int i = 0 ; i < n ; i++){
            ans[i] = abs(suffsum[i] - prefsum[i]);
        }
        return ans;
    }
};