
# For compile QUESTION
# To submit [https://leetcode.com/problems/binary-search/]

class Solution(object):
    def search(self, nums, target):
        l,r = 0,len(nums)-1
        
        while(l<=r):
            mid = l + (r-l)//2  # (r+l)//2
            if(nums[mid]==target):
                return mid
            elif(target<nums[mid]):
                r = mid -1
            else:
                l = l +1
        return -1