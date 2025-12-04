class Solution {
public:
    int countCollisions(string directions) {
        int col = 0;
        stack<char> mystack;
        for(int i=0 ; i<directions.size() ; i++ ){
            if(directions[i] == 'R'){
                mystack.push('R');
            }
            else if(directions[i] == 'S'){
                while(!mystack.empty() && mystack.top() == 'R'){
                    col++;
                    mystack.pop();
                }
                mystack.push('S');
            }
            else{
                if (!mystack.empty() && (mystack.top() == 'S' || mystack.top() == 'R')) {
                    // Collision happens!
                    col++; // The current 'L' contributes 1 collision
                    
                    if (mystack.top() == 'R') {
                        col++; // The 'R' it hit contributes 1 collision
                        mystack.pop();     // That 'R' is processed
                    }
                    
                    // Crucial Step: The wreckage forms a stationary obstacle (S).
                    // Any other 'R's waiting in the stack now crash into this wreckage.
                    while (!mystack.empty() && mystack.top() == 'R') {
                        col++;
                        mystack.pop();
                    }
                    mystack.push('S'); // Push the wreckage state
                } else {
                    // 'L' moves safely to the left (no collision yet)
                    mystack.push('L');
                }
            }
        }
        return col;

        }
};