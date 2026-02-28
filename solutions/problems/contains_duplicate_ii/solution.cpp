class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int winlen = k+1;
        unordered_map <int , int> mp;
        for(int i = 0 ; i<nums.size() ; i++){
            if(i >= winlen){
                mp[nums[i-winlen]]--;
            }
            mp[nums[i]]++;
            if(mp[nums[i]] == 2){
                return true;
            }
            
        }
        return false;
        
    }
};