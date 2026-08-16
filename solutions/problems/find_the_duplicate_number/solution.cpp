class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];  //[1,3,4,2,2]
        }while(slow != fast);
        int slow2 = nums[0];

        while(slow2 != slow){
            slow = nums[slow];
            slow2 = nums[slow2];
        }
        
        return slow;
    }
};