class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> arr;
        for(int i = 0 ; i< nums.size() ; i++){
            int k = nums[i];
            int h = nums[k];
            arr.push_back(h);
        } 
        
    return arr;}
};