class Solution {
public:
    vector<string> buildArray(vector<int>& nums, int n) {
        vector<string> out;
        int stream = 1;
        for(int i = 0 ; i<nums.size(); i++){
            while(stream < nums[i]){
                out.push_back("Push");
                out.push_back("Pop");
                stream++;
            }
            out.push_back("Push");
            stream++;
        }
        
        return out;
    }

};