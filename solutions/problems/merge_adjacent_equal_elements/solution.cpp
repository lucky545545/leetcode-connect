class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> out;
        for(int x : nums ){
            long long val = x;
            while(!out.empty() && out.back() == val){
                val += out.back();
                out.pop_back();
            }
            out.push_back(val);
            
        }
        return out;
    }
};