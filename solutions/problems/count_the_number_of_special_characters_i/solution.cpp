class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lowercase(26 , 0);
        vector<int> uppercase(26 , 0);
        for(auto i : word){
            if(i >= 'A' && i <= 'Z'){
                uppercase[i - 'A']++;
            }
            else{
                lowercase[i - 'a']++;
            }
        }
        int count = 0 ;
        for(int i = 0 ; i < 26 ; i++){
            if(lowercase[i] > 0 && uppercase[i] > 0){
                count++;
            }
        }
        return count;
        
    }
};