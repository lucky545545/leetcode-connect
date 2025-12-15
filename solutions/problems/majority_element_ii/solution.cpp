class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int , int> outMap;
        vector<int> out ;
        for(int i = 0 ; i<nums.size() ; i++){
            outMap[nums[i]]++;
        } 
        int n = nums.size()/3;
        for(const auto& [key , value] : outMap){
            if(value > n){
                out.push_back(key);
            }
        }
        return out;
        
        
    }
};