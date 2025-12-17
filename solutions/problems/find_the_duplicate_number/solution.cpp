class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> out(nums.size()+1 , 0);
        for(int i = 0 ; i < nums.size() ; i++){
            out[nums[i]+1]++;
        }
        for(int j = 0 ; j < out.size() ; j++){
            if(out[j] >= 2){
                return j-1;
            }
        }
        return -1;
    }
};