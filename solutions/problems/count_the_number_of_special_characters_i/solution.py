class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        small_list = set()
        capital_list = set()
        for i in word:
            if(i >= 'a' and i <= 'z'):
                small_list.add(i)
            else:
                capital_list.add(i)
        count = 0
        for j in small_list:
            if(j.upper() in capital_list):
                count = count + 1
        return count 
