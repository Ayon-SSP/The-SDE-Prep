def printSubstrings(self, s: str) -> int:
        allSubstrings = []
        for i in range(0, len(s)):
            for j in range(0, len(s) - i):
                allSubstrings.append(s[j:i + j + 1])
        return allSubstrings

s = "abc"
print(printSubstrings(s))
# output: ['a', 'b', 'c', 'ab', 'bc', 'abc']