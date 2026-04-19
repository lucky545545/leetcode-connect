class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxes(nums.size() , -1);
        vector<int> mines(nums.size() , -1);
        int temp_max = 0;
        int temp_min = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            temp_max = max(temp_max , nums[i]);
            maxes[i] = temp_max;
        }
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            temp_min = min(temp_min , nums[i]);
            mines[i] = temp_min;
        }
        int smallest_stable = INT_MAX;
        int ans = -1;
        for (int i = 0; i < maxes.size(); i++) {
            if(maxes[i] - mines[i] <= k){
                ans = i;
                break;
            }
        }
        return ans;
    }
};