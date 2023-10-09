# /45. Jump Game II
"""
class Solution:
    def jump(self, nums: List[int]) -> int:
        dp = [inf]*len(nums)
        dp[-1] = 0

        for idx in range(len(nums)-2,-1,-1):
            for f in range(nums[idx]):
                if len(nums) <= idx+f+1:
                    break
                dp[idx] = min(dp[idx], dp[idx+f+1])
            dp[idx] += 1

        return int(dp[0])
"""
class Solution:
    def jump(self, nums: List[int]) -> int:
        res = 0
        l = r = 0

        while r < len(nums) - 1:
            farthest = 0
            for i in range(l,r+1):
                farthest = max(farthest,i+ nums[i])
            l, r = r + 1, farthest
            res += 1
        return res
