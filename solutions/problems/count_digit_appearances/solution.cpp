class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int dig = 0;
            int next = 0;
            while(nums[i] > 0){
                dig = nums[i]%10;
                next = nums[i]/10;
                nums[i] = next;
                if(dig == digit){
                    count++;
                }
            }
        }
        return count;
    }
};