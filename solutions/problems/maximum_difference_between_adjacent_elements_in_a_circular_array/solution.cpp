class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max = 0;
    
        
        for(int i = 0 ; i<nums.size()-1 ; i++){
            
            if(abs(nums[i] - nums[i + 1]) > max){
                max = abs(nums[i] - nums[i +1]);
                
            }
        }
        if(abs(nums[0] - nums[nums.size() - 1]) > max){
                max = abs(nums[0] - nums[nums.size() -1]);
            }
        return max;
        
        
    }
};