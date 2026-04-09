class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> vt = {0,0};
        int out = 0;
        int j = 0;
        for(int i = 0 ; i< nums.size() ; i++){
            vt[nums[i]]++;
            if(vt[0] > k){
                while(vt[0] > k){
                    vt[nums[j]]--;
                    j++;
                }
            }
            out = max(out , i-j+1);
        }
        return out;
        
    }
};