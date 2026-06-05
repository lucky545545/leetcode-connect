class Solution {
public:
    int wavinessCounter(int n){
        string str = to_string(n);
        int count = 0;
        if(str.size() <= 2){
            return 0;
        }
        for(int i = 1 ; i < str.size()-1 ; i++){
            if(str[i-1] > str[i] && str[i+1] > str[i] || str[i-1] < str[i] && str[i+1] < str[i]){
                count++;
            }
        }
        return count;

    }
    int totalWaviness(int num1, int num2) {
        int sum = 0;
        for(int i = num1 ; i <= num2 ; i++){
            sum = sum + wavinessCounter(i);
        }

        return sum;
        
    }
};