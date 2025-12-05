class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int br = -1;
        int min_val = 0;
        for(int i = nums.size()-1 ; i > 0 ; i--){
            if(nums[i] > nums[i-1] ){
                br = i-1 ; 
                break;
            }
        }
        if(br == -1){reverse(nums.begin() , nums.end() );}
        else{
        for(int j = nums.size() - 1; j > br; j--){
            if(nums[j] > nums[br]){
                swap(nums[br], nums[j]);
                break; 
            }
        }
        sort(nums.begin() + br+1 , nums.begin() + nums.size());
        }
    }
};