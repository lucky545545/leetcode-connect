class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int j = 0; // Left pointer of our window
        int out = 0; // Stores the max fruits found
        
        for(int i = 0 ; i < fruits.size() ; i++){
            // 1. Always add the current fruit to our baskets
            mp[fruits[i]]++;
            
            // 2. If we have MORE than 2 types of fruit, we must shrink the window
            while(mp.size() > 2) {
                // Remove the fruit at the left pointer
                mp[fruits[j]]--;
                
                // If we dropped all fruits of this type, completely remove it from the map
                if(mp[fruits[j]] == 0) {
                    mp.erase(fruits[j]);
                }
                
                // Shrink window
                j++;
            }
            
            // 3. Update the max length (current index - left index + 1)
            out = max(out, i - j + 1);
        }
        
        return out;
    }
};