class Solution {
public:
    int countPermutations(vector<int>& comp) {
        long long ans = 1; 
        int mod = 1e9 + 7;
        for(int i = 1 ; i < comp.size() ; i++){
            if(comp[0] >= comp[i]){
                return 0;
            }
        }
        for(int j = comp.size()-1 ; j >= 1 ; j-- ){
            ans = (long long)ans*j;
            ans = ans%mod;
        }
        return ans%mod;
        
    }
};