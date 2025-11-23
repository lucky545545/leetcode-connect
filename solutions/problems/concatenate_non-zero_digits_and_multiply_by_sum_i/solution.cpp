class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0 ;
        long long x = 0;
        int s = 0;
        vector<int> bin ; 
        while(n>0){
            s = n%10;
            if(s != 0){
                sum = sum + s;
                bin.push_back(s); 
            }
            n = n/10 ;
            
        }
        reverse(bin.begin() , bin.end());
        for(int d : bin){
            x = x*10 + d;
        }
        return sum*x;
        
    }
};