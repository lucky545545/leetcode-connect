class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int elevator = 0;
        int time = 0;
        for(int i = 0 ; i < requests.size() ; i++){
            time += abs(elevator-requests[i]);
            elevator = requests[i]; 
        }
        return time;
    }
};