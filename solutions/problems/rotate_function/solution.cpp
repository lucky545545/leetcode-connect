class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long sum = 0;
        long func = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum = sum + nums[i];
            func = func + (long)i*nums[i];
        }
        long result = func;

        for(int k = 1 ; k < nums.size() ; k++){
            func = func + sum - (long)nums.size()*nums[nums.size()-k];
            result = max(result , func);
        }
        return result;
    }
};