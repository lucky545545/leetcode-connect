class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == 0){
                count_0++;
            }
            else if(nums[i] == 1){
                count_1++;
            }
            else{
                count_2++;
            }
        }
        int index = 0;
        while(count_0--) nums[index++] = 0;
        while(count_1--) nums[index++] = 1;
        while(count_2--) nums[index++] = 2;
        return nums;    
    }
};