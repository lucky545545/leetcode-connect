class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int j = 0;
        int out = 0;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
            if(mp[s[i]] > 1){
                while(mp[s[i]] > 1){
                    mp[s[j]]--;
                    j++;
                }
            }
            out = max(out , i-j+1);
        }
        
        return out;
    }
};