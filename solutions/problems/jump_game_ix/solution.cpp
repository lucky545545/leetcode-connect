class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {}; // Quick safety check
        
        vector<int> prefixmax(n);
        vector<int> suffixmin(n);
        vector<int> out(n);
        
        // 1. Build Prefix Max
        prefixmax[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefixmax[i] = max(prefixmax[i-1] , nums[i]);
        }
        
        // 2. Build Suffix Min
        suffixmin[n - 1] = nums[n - 1];
        for(int i = n - 2 ; i >= 0 ; i--){
            // FIX: Look at the element to the RIGHT (i + 1)
            suffixmin[i] = min(suffixmin[i+1] , nums[i]); 
        }
        
        // 3. Build Output Array
        out[n - 1] = prefixmax[n - 1];
        // FIX: Use i-- to count backwards, and include index 0
        for(int i = n - 2 ; i >= 0 ; i--){ 
            if(prefixmax[i] > suffixmin[i+1]){
                out[i] = out[i+1];
            }
            else{
                out[i] = prefixmax[i];
            }
        }
        
        return out;
    }
};