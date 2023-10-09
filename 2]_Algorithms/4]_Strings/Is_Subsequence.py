class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if not s:
            return True
        checkIdx = 0
        for ch in t:
            if ch == s[checkIdx]:
                checkIdx += 1
            if checkIdx >= len(s):
                return True
        
        return checkIdx == len(s)
