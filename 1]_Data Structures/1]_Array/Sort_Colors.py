class Solution:
    def sortColors(self, nums: List[int]) -> None:
        # Initialize three pointers: i, j, and ptr.
        i, j, ptr = 0, len(nums) - 1, 0
        
        # Iterate through the array using the pointer 'ptr'.
        while ptr <= j:
            if nums[ptr] == 0:
                # If the current element is 0, swap it with the element at 'i'.
                # Increment both 'i' and 'ptr' to move forward.
                nums[i], nums[ptr] = nums[ptr], nums[i]            
                i += 1
                ptr += 1
            elif nums[ptr] == 1:
                # If the current element is 1, simply increment 'ptr' to move forward.
                ptr += 1
            elif nums[ptr] == 2:
                # If the current element is 2, swap it with the element at 'j'.
                # Decrement 'j' to move it leftward, but do not increment 'ptr'
                # to re-check the element at the new 'ptr' position, as it could be 0 or 1.
                nums[ptr], nums[j] = nums[j], nums[ptr]
                j -= 1
