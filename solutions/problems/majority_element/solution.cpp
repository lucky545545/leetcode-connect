class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> mp ; 
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        } 
        int out = INT_MIN ;
        int candidate;
        for(const auto& [key , value] : mp){
            if(out < value){
                candidate = key;
                out = value;
            }
            
        }
        return candidate;

        
    }
};