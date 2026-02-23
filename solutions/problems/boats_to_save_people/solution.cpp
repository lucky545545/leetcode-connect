class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin() , people.end());
        int i = 0;
        int count = 0;
        int j = people.size() - 1;
        while(i <= j){
            if((people[i] + people[j]) <= limit){
                i++;
                j--;
                count++;
            }
            else if((people[i] + people[j]) > limit && people[j] <= limit){
                j--;
                count++;
            }
            if(i == j){
                count++;
                break;
            }
        }
        return count;
    }
};