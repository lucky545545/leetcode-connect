class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int n = columnTitle.length();
        int j = 0 ;
        for(int i = n-1 ; i>= 0 ; i--){
            sum = sum + (columnTitle[i]- '@')*pow(26,j); 
            j++;

        }
        return sum;
        
    }
};