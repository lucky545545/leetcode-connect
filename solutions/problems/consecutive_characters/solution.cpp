class Solution {
public:
    int maxPower(string s) {
        int power = 0;
        int count = 0;
        for(int i = 0 ; i< s.size()-1 ; i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                power = max(count , power);
                count = 0;
            }
        }
        power = max(count , power);
        return power+1;
        
    }
};