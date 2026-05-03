class Solution {
public:
    bool primechecker(int n){
        if(n<=1){
            return false;
        }
        if(n<=3){
            return true;
        }
        if(n%3 == 0 || n%2 == 0){
            return false;
        }
        for(int i = 5 ; i*i <= n ; i=i+6){
            if(n%i == 0 || n%(i+2) == 0){
                return false;
            }
        }
        return true;
        
    }
    int sumOfPrimesInRange(int n) {
        int first = n;
        int second = 0;
        vector<int> temp;
        int dig = 0;
        int next = 0;
        while(n>0){
            dig = n%10;
            next = n/10;
            n = next;
            temp.push_back(dig);
        }
        for(int i = temp.size()-1 , j = 0 ; i>=0 ; i-- , j++){
            second = second + temp[j]*pow(10,i);
        }
        int primecount = 0;
        for(int i = min(first,second) ; i <= max(first,second) ; i++){
            if(primechecker(i) == true){
                primecount += i;
            }
        }
        return primecount;
        
    }
};