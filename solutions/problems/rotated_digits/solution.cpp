class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        bool valid = false;
        int dig,curr,next;
        for(int i = 1 ; i <= n ; i++){
            curr = i;
            while(curr > 0){
                dig = curr%10;
                next = curr/10;
                curr = next;
                if(dig == 4 || dig == 3 || dig == 7){
                    valid = false;
                    break;
                }
                if(dig == 5 || dig == 6 || dig == 2 || dig == 9){
                    valid = true;
                }
                
            }
            if (valid == true){
                count++;
            }
            valid = false;
        }

        return count;
        
    }
};