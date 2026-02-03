class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int np = 0;
        int nq = 0;
        if(nums[0] > nums[1]){
            return false;
        }
        bool trend = true; //true for increasing and false for decresing
        for(int i = 0  ; i<nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                return false;
            }
            if( nums[i] > nums[i+1] && trend == true){
                np++;
                trend = false;
            }
            else if( nums[i] < nums[i+1] && trend == false){
                nq++;
                trend = true;
            }
        }
        if(np == 1 && nq ==1){
            return true;
        }
        return false;
        
    }
};