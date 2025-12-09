class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long ans = 0;
        long long target = 0;
        const int mod = 1e9 + 7 ;
        map<int , int> right_map  ;
        map<int , int> left_map ;
        for(int i = 0 ; i<nums.size() ; i++){
            right_map[nums[i]]++;
        }

        for(int j = 0 ; j< nums.size() ; j++){
            right_map[nums[j]]--;
            
            target = (long long)nums[j]*2;
            if(left_map.count(target) && right_map.count(target)){
                ans = ans + (long long)right_map[target]*left_map[target] ; 
            }
            left_map[nums[j]]++;
        }
        return ans % mod;
    }
};