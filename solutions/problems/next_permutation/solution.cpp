class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k = -1;
        for(int i = nums.size()-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                k = i;
                break; 
            }
        }
        if(k == -1){
            reverse(nums.begin() , nums.end());
            return;
        }
        for(int j = nums.size() - 1  ; j > k ; j--){
            if(nums[j] > nums[k]){
                swap(nums[j] , nums[k]);
                break; 
            }
        }
        reverse(nums.begin()+k+1 , nums.end());

        
    }
};