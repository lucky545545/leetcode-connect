class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> out;
        int i = 0 ;
        int j = nums.size()-1;
        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])){
                out.insert(out.begin() , nums[i]*nums[i]);
                i++;
            }
            else{
                out.insert(out.begin() , nums[j]*nums[j]);
                j--;
            }  
        }
        return out;
        
    }
};