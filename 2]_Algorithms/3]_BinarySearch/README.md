# 🪄 Binary Search . . . log n

Binary Search is a Divide and Conquer algorithm. 

## 🏷️ Commonly asked interview questions that use binary search algorithm














<br>

### 🧣Search in Rotated Sorted Array

<img src="source\Screenshot 2022-07-17 103807.png" alt="img for search insert position" width="500" ><br>

- If the entire left part is monotonically increasing, which means the pivot point is on the right part
  - If left <= target < mid ------> drop the right half
  - Else ------> drop the left half

- If the entire right part is monotonically increasing, which means the pivot point is on the left part
  - If mid < target <= right ------> drop the left half
  - Else ------> drop the right half
<br>

[`Submit`](https://leetcode.com/problems/search-in-rotated-sorted-array/)

```python
class Solution(object):
    def search(self, nums, target):
        l, r = 0, len(nums) - 1
        while (l <= r):
            mid = l + (r - l)//2
            if(nums[mid]==target):
                return mid
            elif(nums[l]<=nums[mid]):
                if(nums[l]<=target<nums[mid]):
                    r = mid -1
                else:
                    l = mid +1
            else:
                if(nums[mid]<target<=nums[r]):
                    l = mid +1
                else:
                    r = mid -1
        return -1

Test = Solution()
print(Test.search([4,5,6,7,0,1,2],0))
```