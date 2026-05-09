class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string out = "";
        bool flag = false;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != ' '){
                word.push_back(s[i]);
                flag = true;
            }
            else if(flag == true && s[i] == ' '){
                out.insert(0 , word);
                out.insert(0 , " ");
                word = "";
                flag = false;
            }
        }
        out.insert(0,word);
        while(out[0] == ' '){
            out.erase(0,1);
        }
        return out;   
    }
};