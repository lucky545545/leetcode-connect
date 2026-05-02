class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int> mp;
        int out = 0 ;
        int j = 0;
        int max_elem = 0;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
            if(mp[s[i]] > max_elem){
                max_elem = mp[s[i]];
            }
            while((i-j+1)-max_elem > k){
                mp[s[j]]--;
                j++;
            }
            out = max(out , i-j+1);
        }
        return out;
        
    }
};