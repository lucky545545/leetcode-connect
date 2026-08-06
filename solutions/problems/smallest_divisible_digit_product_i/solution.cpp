class Solution {
public:
    int smallestNumber(int n, int t) {
        int next;
        int digit;
        int candidate;
        int current;
        int curr_prod;
        for(int candidate = n ; candidate <= 100 ; candidate++){
            current = candidate;
            curr_prod = 1;
            while(current > 0){
                digit = current%10;
                next = current/10;
                current = next;
                curr_prod = curr_prod*digit;
            }
            if(curr_prod%t == 0){
                return candidate;
            }
        }
        return -1;
    }
};