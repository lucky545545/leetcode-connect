class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> cset;
        int i = 0;
        int max_count = 0 ;
        for(int j = 0 ; j < s.size() ; j++){
            while(cset.find(s[j]) != cset.end()){
                cset.erase(s[i]);
                i++;
            } 
            cset.insert(s[j]);
            max_count = max(max_count , j-i+1);
            
        }
        return max_count;
    }
};