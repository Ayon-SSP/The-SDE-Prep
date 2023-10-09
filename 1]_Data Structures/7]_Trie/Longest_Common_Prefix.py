class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        first, last = strs[0], strs[-1]
        
        lcp = 0
        for i in range(min(len(first), len(last))):
            if first[i] == last[i]:
                lcp += 1
            else:
                break

        return first[:lcp]
