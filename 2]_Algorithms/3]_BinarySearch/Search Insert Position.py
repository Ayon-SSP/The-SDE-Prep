# For compile QUESTION
# To submit [https://leetcode.com/problems/search-insert-position/]

def searchInsert(self, nums: List[int], target: int) -> int:
    if target in nums:
        for i in range(len(nums)):
            if target == nums[i]:
                return i
    else:
        if nums[0] > target:
            return 0
        for i in range(len(nums)):
            if i == len(nums) - 1:
                return i + 1
            elif nums[i] < target and nums[i+1] > target:
                return i+1