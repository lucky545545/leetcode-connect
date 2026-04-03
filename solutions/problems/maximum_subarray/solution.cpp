class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int msum = INT_MIN;
        for(auto i : nums){
            curr = curr + i;
            msum = max(msum , curr);
            if(curr < 0){
                curr = 0;
            }
        }
        return msum;
        
    }
};