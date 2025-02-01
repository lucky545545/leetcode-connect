class Solution:
    def findValidPair(self, s: str) -> str:
        freq = {} 
        for c in s:
            if c in freq:
                freq[c] += 1
            else:
                freq[c] = 1
        for i in range (0, len(s)-1):
            if (s[i]!=s[i+1] and freq[s[i]] == int(s[i]) and freq[s[i + 1]] == int(s[i + 1])):
                return s[i] + s[i +1]
        return ""