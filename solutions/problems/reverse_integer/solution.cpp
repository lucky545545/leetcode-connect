class Solution {
public:
    int reverse(int x) {
        int i = 0;long t;
        long sum = 0;

        while(x){
            t = x%10;
            x = x/10;
            sum = sum*10 + t;

            if(sum>2147483647 || sum<-2147483648){
                return 0;
            }
        }
        return sum;
    }
};