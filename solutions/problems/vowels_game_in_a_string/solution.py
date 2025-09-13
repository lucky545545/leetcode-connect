class Solution:
    def doesAliceWin(self, s: str) -> bool:
        vowel = "aeiou"
        count = 0
        for i in s:
            if(i in vowel):
                count += 1 
        if(count == 0):
            return False
        return True
        