class Node:

    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        new_node.next = self.head

        # If Linked List already had at least 1 node
        if self.head is not None:
            self.head.prev = new_node
            # changing the head to freshly entered node
        self.head = new_node

    def delete_node(self, deleteVal):
        temp = self.head
        previous = None

        # Case when there is only 1 node in the list
        if temp.next is None:
            self.head = None
            print("\nValue deleted: ", temp.data)
            return

            # if the head node itself needs to be deleted
        if temp is not None and temp.data == deleteVal:
            self.head = temp.next
            self.head.prev = None
            print("\nValue deleted: ", temp.data)
            return

        # run until we find the value to be deleted in the list
        while temp is not None and temp.data != deleteVal:
            previous = temp
        temp = temp.next
        # if value is not present then

        # temp will have traversed to last node NULL

        if temp is None:
            print("\nValue not found")

            # Case 2: (24)->next = 16 (as 20->next = 16)
        # Case 3: (16)->next = NULL (as 12->next = NULL)

        previous.next = temp.next

        # If the last node is to be deleted
        if temp.next is None:
            print("\nValue deleted: ", temp.data)
            return

        # Case 2 : temp2 = 20->next = 16

        temp2 = temp.next
        temp2.prev = previous

        print("\nValue deleted: ", temp.data)
        return

    def display(self):
        temp = self.head
        end = None

        print("Linked List in Forward Direction")
        while temp:
            print(temp.data, end=" ")
            end = temp
            temp = temp.next
        print("")

        print("Linked List in backward direction")
        while end:
            print(end.data, end=" ")
            end = end.prev
        print("")


# Drive Code
ll = LinkedList()

ll.insert(12)
ll.insert(16)
ll.insert(20)
ll.insert(24)
ll.insert(30)
ll.insert(22)

ll.display()

# deleting first occurrence of a value in linked list
ll.delete_node(22)
ll.display()

ll.delete_node(20)
ll.display()

ll.delete_node(12)
ll.display()

ll.delete_node(30)
ll.display()

ll.delete_node(16)
ll.display()

ll.delete_node(24)
ll.display()
