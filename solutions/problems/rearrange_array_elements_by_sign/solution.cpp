class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> out = {};
        int i = 0,j = 0;

        while(out.size() != nums.size()){
            if(out.size()%2 == 0){
                while(nums[i] < 0){
                    i++;
                }
                out.push_back(nums[i]);
                i++;
            }
            else{
                while(nums[j] > 0){
                    j++;
                }
                out.push_back(nums[j]);
                j++;
            }
        }
        return out;
        
    }
};