class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        int max_freq = 0;
        int max_dist = 0;
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
            max_freq = max(max_freq , mp[nums[i]]);
            while(max_freq > k){
                if(nums[j] == nums[i]){
                    max_freq--;
                }
                mp[nums[j]]--;
                j++;
            }
            max_dist = max(max_dist , i-j+1);
        }
        return max_dist;
    }
};