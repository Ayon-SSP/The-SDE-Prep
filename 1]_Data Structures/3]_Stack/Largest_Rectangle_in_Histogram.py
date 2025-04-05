class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        # Get the number of elements in the input list 'heights'.
        n = len(heights)
        
        # Initialize an empty stack to keep track of indices and
        # create a list 'next_small_ele' to store the next smaller
        # element's index for each element in 'heights'.
        stack = []
        next_small_ele = [len(heights)] * n

        # Traverse the 'heights' list in reverse order along with
        # their indices.
        for i, num in reversed(list(enumerate(heights))):
            # Pop elements from the 'stack' until a smaller element is
            # encountered or the 'stack' becomes empty.
            while stack and heights[stack[-1]] >= num:
                stack.pop()
            
            # If the 'stack' is not empty, store the index of the
            # next smaller element for the current element.
            if stack:
                next_small_ele[i] = stack[-1]
            
            # Push the current index onto the 'stack'.
            stack.append(i)
        
        # Reset the 'stack' for the next phase of processing.
        stack = []
        # Initialize the variable to store the result.
        res_largest_rect = -1
        
        # Traverse the 'heights' list again, this time from left to right.
        for i, height in enumerate(heights):
            # Initialize 'prev_small_ele' to -1.
            prev_small_ele = -1
            
            # Pop elements from the 'stack' until a smaller element is
            # encountered or the 'stack' becomes empty.
            while stack and heights[stack[-1]] >= height:
                stack.pop()
            
            # If the 'stack' is not empty, store the index of the
            # previous smaller element for the current element.
            if stack:
                prev_small_ele = stack[-1]
            
            # Push the current index onto the 'stack'.
            stack.append(i)
            
            # Calculate the area of the largest rectangle that can be
            # formed including the current element and update 'res_largest_rect'.
            res_largest_rect = max(res_largest_rect, 
                (next_small_ele[i] - prev_small_ele - 1) * height)

        # Return the final result, which represents the largest rectangle area.
        return res_largest_rect
