class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n , -1);
        temp[n-1] = 0;
        for(int i = n-2 ; i >= 0; i--){
            if(nums[i] + i >= n-1){
                    temp[i] = 1;  
            }
            else{
                int min_count = INT_MAX;
                for(int j = i+1 ; j <= i + nums[i] ; j++){
                    if(temp[j] != -1){
                        min_count = min(min_count , temp[j]);
                    }
                }
                if(min_count != INT_MAX){
                    temp[i] = min_count + 1;
                }
                
            }
        }
        return temp[0];
    }
};