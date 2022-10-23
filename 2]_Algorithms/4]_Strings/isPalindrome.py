class Solution:
    def isPalindrome(self, s: str) -> bool:
        string = ''
        for c in s:
            if c.isalnum():
                string += c.lower()
        return string == string[::-1]
    # "A man, a plan, a canal: Panama" == True
