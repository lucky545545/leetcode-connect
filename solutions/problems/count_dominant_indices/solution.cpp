class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        float avg = 0;
        int count = 0;
        int n = nums.size();
        for(int i = 0 ; i<nums.size()-1 ; i++){
            avg = 0;
            for(int j = i + 1 ; j<nums.size() ; j++){
                avg = avg + nums[j];
            }
            avg = avg / (n - i - 1);
            if(nums[i] > avg){
                count++;
            }
        }
        return count;
        
    }
};