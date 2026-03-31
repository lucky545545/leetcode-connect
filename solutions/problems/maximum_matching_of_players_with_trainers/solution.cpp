class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin() , players.end());
        sort(trainers.begin() , trainers.end());

        int match = 0;
        int j = 0;
        for(int i = 0 ; i < trainers.size() ; i++){
            if(j >= players.size()){
                break;
            }
            if(players[j] <= trainers[i]){
                match++;
                j++;
            }
        }
        return match;
        
    }
};