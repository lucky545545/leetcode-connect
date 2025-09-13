class Solution:
    def sortVowels(self, s: str) -> str:
        vowel = "aeiouAEIOU"
        sorted_vowel = []
        for i in s:
            if(i in vowel):
                sorted_vowel.append(i)
            else:
                continue
        s_new = list(s)
        vowel_new = sorted(sorted_vowel)
        j = 0

        for i in range(0 , len(s_new)):
           if(s_new[i] in vowel):
                s_new[i] = vowel_new[j]
                j +=1 
        return "".join(s_new)

        