class Solution:
    def pivotIndex(self, nums: List[int]) -> int:

        totalSum, leftSum = sum(nums), 0
        for i, num in enumerate(nums):
            if leftSum * 2 == totalSum - num:
                return i
            leftSum += num
        
        return -1
