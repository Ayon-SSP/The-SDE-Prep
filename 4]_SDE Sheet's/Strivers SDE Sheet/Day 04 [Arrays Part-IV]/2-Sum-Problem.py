class Solution(object):
    def twoSum(self, nums, target):
        dit = {}
        for idx in range(len(nums)):
            if (target-nums[idx]) in dit:
                return [idx,dit[target-nums[idx]]]
            else:
                dit[nums[idx]]=idx
