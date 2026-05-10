class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> mp(n , -1);
        int curr_max = -1;
        mp[n-1] = 0;
        for(int i = n-2 ; i >= 0 ; i--){
            
            for(int j = i+1 ; j <= n - 1 ; j++){
                if(abs(nums[i] - nums[j]) <= target && mp[j] != -1){
                    curr_max = max(curr_max , mp[j] + 1);
                }
            }
            mp[i] = curr_max;
            curr_max = -1;
        }
        return mp[0]; 
        
    }
};