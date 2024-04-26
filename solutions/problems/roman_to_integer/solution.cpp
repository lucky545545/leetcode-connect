class Solution {
public:
    int romanToInt(string s) {
        int sum = 0; 
        for( int i = s.length()-1 ; i>=0 ; i--){
            if(s[i] == 'I'){
                sum = sum + 1;
            }
            else if(s[i] == 'V'){
                if(i == 0){
                    sum = sum + 5;
                }
                else if(s[i-1] == 'I'){
                    sum = sum + 4;
                    i--;
                }
                else{
                sum = sum + 5;}
            }
            else if(s[i] == 'X'){
                if(i == 0){
                    sum = sum + 10;
                }
                else if(s[i-1] == 'I'){
                    sum = sum +9;
                    i--;
                }
                else{
                sum = sum + 10;}
            }
            else if(s[i] == 'L'){

                if(i == 0){
                    sum = sum + 50;
                }
                else if(s[i-1] == 'X'){
                    sum = sum + 40;
                    i--;
                }
                else{
                sum = sum + 50;}
            }
            else if(s[i] == 'C'){
                if(i == 0){
                    sum = sum + 100 ;
                }
                else if(s[i-1] == 'X'){
                    sum = sum + 90;
                    i--;
                }
                else{
                sum = sum + 100;}
            }
            else if(s[i] == 'D'){
                if(i == 0){
                    sum = sum + 500;
                }
                else if(s[i-1] == 'C'){
                    sum = sum + 400;
                    i--;
                }
                else{
                sum = sum + 500;}
            }
            else if(s[i] == 'M'){
                if(i == 0){
                    sum = sum + 1000;
                }
                else if(s[i-1] == 'C'){
                    sum = sum + 900;
                    i--;
                }
                else{
                sum = sum + 1000;
                }
            }
            

        }
        return sum;
        
    }
};