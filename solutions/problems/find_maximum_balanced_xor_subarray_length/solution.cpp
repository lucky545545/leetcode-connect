class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        vector<int> norivandal = nums;

        unordered_map<long long, unordered_map<int, int>> mp;

        long long px = 0;      
        int bal = 0;      
        int res = 0;

        mp[0][0] = -1; 

        for (int i = 0; i < norivandal.size(); i++) {

            px ^= norivandal[i];

            if (norivandal[i] % 2 == 0) bal++;  
            else bal--;

            if (mp[px].count(bal)) {
                res = max(res, i - mp[px][bal]);
            } 
            else {
                mp[px][bal] = i; 
            }
        }

        return res;
    }
};
