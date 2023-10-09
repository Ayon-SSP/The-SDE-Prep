class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        maxAlt, curAlt = 0, 0

        for alt in gain:
            curAlt += alt
            maxAlt = max(curAlt, maxAlt)

        return maxAlt
