class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int a = word1.length();
        int b = word2.length();
        for(int i = 0 ; i< a+b ; i++ ){
            if(i < a){
                str += word1[i];
            }
            if(i < b){
                str +=word2[i];
            }
        }
        return str;
    }
};