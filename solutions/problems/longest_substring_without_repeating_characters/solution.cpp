class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char , int> mp;
        if(s.size() == 0){
            return 0;
        }
        int j = 0;
        int max_count = 1;
        for(int i = 0 ; i<s.size() ; i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[j]]--;
                j++;
            }
            max_count = max(i-j+1 , max_count);

        }
        return max_count;
        
    }
};