class Solution {
public:
    int countValidPrefixes(string s) {
        int count_1 = 0;
        int count_0 = 0;
        int out = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '0'){
                count_0++;
            }
            else{
                count_1++;
            }
            if(abs(count_0 - count_1) <= 1){
                out++;
            }
        }
        return out;
    }
};