class Solution {
public:
    int beautySum(string s) {
        int out = 0;
        for(int i = 0 ; i < s.size() ; i++){
            int freq[26] = {0};
            for(int j = i; j < s.size() ; j++){
                freq[s[j] - 'a']++;
                int maxf = 0;
                int minf = INT_MAX;
                for(int k = 0 ; k < 26 ; k++){
                    if(freq[k] > 0){
                        maxf = max(freq[k] , maxf);
                        minf = min(freq[k] , minf);
                    }
                }
                out = out + (maxf - minf);
            }
            
        }
        return out;
    }
};