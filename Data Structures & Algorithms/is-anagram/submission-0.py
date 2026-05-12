class Solution:

    def strToDict(self, s: str) -> dict:
        chars = dict()
        for c in s:
            if c in chars:
                chars[c] += 1
            else:
                chars[c] = 1
        return chars

    def isAnagram(self, s: str, t: str) -> bool:

        charS = self.strToDict(s)
        charT = self.strToDict(t)

        if charS == charT:
            return True
        else:
            return False
