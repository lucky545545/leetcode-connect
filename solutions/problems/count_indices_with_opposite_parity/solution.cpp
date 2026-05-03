class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> out;
        int count = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(nums[i]%2 == 0){
                    if(nums[j]%2 != 0){
                        count++;
                    }
                }
                else{
                    if(nums[j]%2 == 0){
                        count++;
                    }
                }
            }
            out.push_back(count);
            count = 0;
        }
        out.push_back(0);
        return out;
    }
};