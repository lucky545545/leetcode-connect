class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_equals = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }
        int prefixsum = 0;
        
        unordered_map<int , int> table;
        table[0] = -1;

        for(int i = 0 ; i < nums.size() ; i++){
            prefixsum += nums[i];
            if(table.find(prefixsum) != table.end()){
                max_equals = max(max_equals , i-table[prefixsum]);
            }
            else{
                table[prefixsum] = i;
            }
            
        }
        return max_equals;
    }
};