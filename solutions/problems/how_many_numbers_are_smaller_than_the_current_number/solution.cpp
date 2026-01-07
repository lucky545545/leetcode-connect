class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int> out;
        for(int i = 0 ; i < nums.size() ; i++){
            
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[j] < nums[i]){
                    count++;
                }
            }
            out.push_back(count);
            count = 0;
        }
        
        return out;
        
    }
};