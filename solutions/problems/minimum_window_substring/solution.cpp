class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || t.size() > s.size()) {
            return "";
        }

        unordered_map<char, int> required;
        unordered_map<char, int> window;

        for (char ch : t) {
            required[ch]++;
        }

        int requiredCount = required.size();
        int formed = 0;

        int left = 0;
        int minLength = INT_MAX;
        int minStart = 0;

        for (int right = 0; right < s.size(); right++) {
            char current = s[right];
            window[current]++;

            // This character has reached its required frequency.
            if (required.count(current) &&
                window[current] == required[current]) {
                formed++;
            }

            // Shrink the valid window from the left.
            while (formed == requiredCount) {
                int currentLength = right - left + 1;

                if (currentLength < minLength) {
                    minLength = currentLength;
                    minStart = left;
                }

                char leftCharacter = s[left];
                window[leftCharacter]--;

                // Removing this character makes the window invalid.
                if (required.count(leftCharacter) &&
                    window[leftCharacter] < required[leftCharacter]) {
                    formed--;
                }

                left++;
            }
        }

        return minLength == INT_MAX
            ? ""
            : s.substr(minStart, minLength);
    }
};