class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> subs(3,0);
        int j = 0, count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            subs[s[i] - 'a']++;
            while(subs[0] > 0 && subs[1] > 0 && subs[2] > 0){
                count += s.size()-i;
                subs[s[j]-'a']--;
                j++;
            }
        }
        return count;
        
    }
};