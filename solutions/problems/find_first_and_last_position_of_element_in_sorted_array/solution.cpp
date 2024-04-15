class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        vector<int> arr1;
        int i = 0; int j = 0;
        int count = 0;
        for(i = 0 ; i<nums.size() ; i++){
            if(nums[i] == target){
                arr.push_back(i);
                count++;
            }
        }
        if(count == 1){
            arr.push_back(arr[0]);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
        }
        if(arr.size()>0){
                arr1.push_back(arr[0]);
                arr1.push_back(arr[arr.size()-1]);
                return arr1;



            }
        else{
            arr.push_back(-1);
            arr.push_back(-1);
            return arr;
        }
        
        
    }
};