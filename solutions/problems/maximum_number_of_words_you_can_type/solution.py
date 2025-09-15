class Solution:
    def canBeTypedWords(self, text: str, brok: str) -> int:
        split_text = text.split()
        cnt = 0
        for i in range(0 , len(split_text)):
            for j in range(0 , len(split_text[i])):
                if(split_text[i][j] in brok):
                    cnt += 1
                    break
        return len(split_text) - cnt


        