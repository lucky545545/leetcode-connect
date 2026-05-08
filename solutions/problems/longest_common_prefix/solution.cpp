class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out = "";
        if(strs.size() == 1){
            return strs[0];
        }
        for(int i = 0 ; i < strs[0].size() ; i++ ){
            char curr = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j++){
                if(i == strs[j].size() || strs[j][i] != curr){
                    return out;
                }
                else if(j == strs.size()-1){
                    out.push_back(curr);
                }
            }
        }
        return out;
        
    }
};