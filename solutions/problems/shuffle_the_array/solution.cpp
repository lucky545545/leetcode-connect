class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans ;
        int j= nums.size()-1;
        for(int i = nums.size()/2 -1 ; i >=0  ; i--){
            ans.push_back(nums[j]);
            ans.push_back(nums[i]);
            j--;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};