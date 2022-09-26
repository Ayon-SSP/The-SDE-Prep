# 🪄 Linked List Problems

## 🏷️ Problems imp's

<br>

### 🧣Linked List Cycle (Floyd's Cycle Detection)


<img src="source\floyds cycle deteection.png" alt="img for search insert position" width="500" ><br>

<br>

[`Submit`](https://leetcode.com/problems/linked-list-cycle/)

```python
class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        
        slow,fast = head,head
        while fast and fast.next:
            slow,fast = slow.next,fast.next.next
            if(slow==fast):
                return True
        return False
```