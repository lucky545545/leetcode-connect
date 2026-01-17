class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int , int> table;;
        for(int i : nums){
            if(i > 0){
                table[i]++;
            }
        }
        for(int i = 1 ; ; i++){
            if(table[i] == 0){
                return i;
            }
        }
        return -1;;
        
    }
};