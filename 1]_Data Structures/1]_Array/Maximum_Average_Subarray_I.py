class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        curSum = maxSum = sum(nums[:k])

        for idx in range(k, len(nums)):
            curSum = curSum + nums[idx] - nums[idx - k]
            if maxSum < curSum:
                maxSum = curSum
        return maxSum/k
