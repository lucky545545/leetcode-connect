class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = nums.size()-1;
        int max_p = 0;

        while(i <= j){
            max_p = max(max_p , nums[i] + nums[j]);
            i++;
            j--;
        }
        return max_p;
        
    }
};