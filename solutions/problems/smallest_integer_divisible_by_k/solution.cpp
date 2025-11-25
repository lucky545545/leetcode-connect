class Solution {
public:
    int smallestRepunitDivByK(int k) {
        vector<bool> v(k , false);
        int rem = 0;
        if(k == 1){return 1;}
        for(int i = 1 ; i <= k ; i++){
            rem = (rem*10 + 1)%k;
            if(rem == 0){
                return i;
            }
            if(v[rem]){return -1;}
            v[rem] = true;

            }
            return -1;
        }
    
};