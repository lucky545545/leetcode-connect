class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char , int> mp;
        int j = 0;
        int max_len = 0;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
            while(mp[s[i]] > 2){
                mp[s[j]]--;
                j++;
            }
            max_len = max(max_len , i-j+1);

        }
        return max_len;
    }
};