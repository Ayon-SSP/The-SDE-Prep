class Solution:
    def longestPalindrome(self, s: str) -> str:

        res, resLen = "", 0

        for i in range(len(s)):

            # odd Length
            l, r = i, i
            while 0 <= l and r < len(s) and s[l] == s[r]:
                if resLen < (r - l + 1):
                    res = s[l:r+1]
                    resLen = r - l + 1
                l -= 1
                r += 1
            
            # even Length
            l, r = i, i + 1
            while 0 <= l and r < len(s) and s[l] == s[r]:
                if resLen < (r - l + 1):
                    res = s[l:r+1]
                    resLen = r - l + 1
                l -= 1
                r += 1
        
        return res
