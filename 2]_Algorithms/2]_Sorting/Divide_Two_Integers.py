class Solution:
  def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    # Base case: If either list1 or list2 is empty, return the non-empty list
    if not list1 or not list2:
      return list1 if list1 else list2
    
    # Compare the values of the first nodes in list1 and list2
    if list1.val > list2.val:
      # Swap list1 and list2 if list1's value is greater than list2's value
      list1, list2 = list2, list1
      
    # Recursively merge the remaining lists after the current node
    list1.next = self.mergeTwoLists(list1.next, list2)
    
    # Return the merged list (the head of list1)
    return list1
