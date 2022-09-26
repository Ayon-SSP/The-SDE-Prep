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
