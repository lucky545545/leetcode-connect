class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> check(n + 1, 0); 
        for(int i = 0; i < nums.size(); i++) {
            check[nums[i]]++;
        }
        
        vector<int> out;
        for(int j = 1; j <= n; j++) {
            if(check[j] == 0) {
                out.push_back(j);
            }
        }
        
        return out;
    }
};