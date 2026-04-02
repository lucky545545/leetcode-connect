class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; // This will act as our stack AND our final output
        
        for (int i = 0; i < asteroids.size(); i++) {
            int current = asteroids[i];
            bool survived = true; // Assume the current asteroid survives initially
            
            // CHAIN REACTION: While there is a collision happening...
            // (Stack is not empty, top of stack is moving RIGHT, current is moving LEFT)
            while (!st.empty() && st.back() > 0 && current < 0) {
                
                // If the incoming left-moving asteroid is BIGGER
                if (abs(current) > st.back()) {
                    st.pop_back(); // Destroy the right-moving asteroid in the stack
                    continue;      // Keep checking the next asteroid in the stack!
                }
                // If they are EXACTLY THE SAME size
                else if (abs(current) == st.back()) {
                    st.pop_back(); // Destroy the asteroid in the stack
                    survived = false; // Destroy the incoming asteroid
                    break;            // Collision is over
                }
                // If the incoming asteroid is SMALLER
                else {
                    survived = false; // Destroy the incoming asteroid
                    break;            // Collision is over
                }
            }
            
            // If the incoming asteroid destroyed everything in its path (or never hit anything)
            if (survived) {
                st.push_back(current);
            }
        }
        
        return st;
    }
};