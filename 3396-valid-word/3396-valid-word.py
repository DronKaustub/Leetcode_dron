class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """
        n = len(word)
        if n < 3:
            return False
        vowel = False
        cons  = False
        num = False
        
        for i in range(0,n):
            if word[i].isnumeric() or word[i].isalpha() : 
                if word[i] in "aeiouAEIOU":
                    vowel = True
                elif word[i].isnumeric():
                    num = True
                else:
                    cons = True
            else:
                return False
        if vowel and cons:
            return True
        else:
            return False

