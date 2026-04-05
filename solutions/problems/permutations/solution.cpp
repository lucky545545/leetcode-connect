class Solution {
public:
    vector<int> nextpermute(vector<int> nums){
        int k = -1;
        for(int i = nums.size()-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                k = i;
                break;
            }
        }
        if(k == -1){
            reverse(nums.begin() , nums.end());
            return nums;
        }
        for(int j = nums.size() - 1  ; j > k ; j--){
            if(nums[j] > nums[k]){
                swap(nums[j] , nums[k]);
                break; 
            }
        }
        reverse(nums.begin()+k+1 , nums.end());
        return nums;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> out;
        int factorial=1;
        out.push_back(nums);
        int n = nums.size();
        for (int i = 1; i <= n; ++i) {
            factorial = factorial * i;
        }
        factorial--;
        while(factorial != 0){
            nums = nextpermute(nums);
            out.push_back(nums);
            factorial--;
        }
        return out;
        
    }
};