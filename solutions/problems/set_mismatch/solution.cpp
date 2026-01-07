class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int nat_sum = n*(n+1)/2;
        int nums_sum = 0 ;
        int set_sum = 0;
        unordered_set<int> s(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size(); i++ ){
            nums_sum += nums[i]; 
        }
        for(int a : s){
            set_sum += a; 
        }

        return {nums_sum - set_sum , nat_sum-set_sum};
        
    }
};