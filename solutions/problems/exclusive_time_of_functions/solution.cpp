class Solution {
public:
    struct Log {
    int id;
    string status;
    int timestamp;
};
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        // Initialize the times vector with 0
    vector<int> times(n, 0);
    // Create a stack to store the logs
    stack<Log> st;

    // Iterate through the logs
    for (string log : logs) {
        stringstream ss(log);
        string temp, temp2, temp3;
        getline(ss, temp, ':');
        getline(ss, temp2, ':');
        getline(ss, temp3, ':');

        Log item = { stoi(temp), temp2, stoi(temp3) };
        // If the current log is a start log
        if (item.status == "start") {

            // Push the log onto the stack
            st.push(item);
        }
        else { // If the current log is an end log

            // Calculate the time added for the current
            // function
            int time_added
                = item.timestamp - st.top().timestamp + 1;

            // Add the time to the times vector
            times[st.top().id] += time_added;
            // Pop the log from the stack
            st.pop();

            // If there are still logs on the stack
            if (!st.empty()) {
                // Subtract the time from the previous
                // function on the stack
                times[st.top().id] -= time_added;
            }
        }
    }
    // Return the times vector
    return times;
        
    }
};
