class Solution:
  def search(self, nums: List[int], target: int) -> int:
    l = 0  # Initialize left pointer
    r = len(nums) - 1  # Initialize right pointer

    while l <= r:
      m = (l + r) // 2  # Calculate the middle index

      if nums[m] == target:  # If the middle element is equal to the target, return its index
        return m

      if nums[l] <= nums[m]:  # If the left subarray (nums[l..m]) is sorted
        if nums[l] <= target < nums[m]:
          # If the target is within the left subarray, adjust the right pointer
          r = m - 1
        else:
          # If the target is not within the left subarray, adjust the left pointer
          l = m + 1
      else:  # If the right subarray (nums[m..r]) is sorted
        if nums[m] < target <= nums[r]:
          # If the target is within the right subarray, adjust the left pointer
          l = m + 1
        else:
          # If the target is not within the right subarray, adjust the right pointer
          r = m - 1

    # If the target is not found in the array, return -1
    return -1
