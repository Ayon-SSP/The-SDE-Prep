class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        if self.is_empty():
            return IndexError("Queue is empty")

        return self.items.pop()

    def size(self):
        return len(self.items)


queue = Queue()
print(queue.is_empty())  # True
print(queue.size())  # 0
print(queue.dequeue())  # IndexError

queue.enqueue(1)
print(queue.is_empty())  # False
print(queue.size())  # 1
print(queue.dequeue())  # 1

queue.enqueue(1)
queue.enqueue(2)
queue.enqueue(3)
print(queue.size())  # 3
print(queue.dequeue())  # 1
print(queue.dequeue())  # 2
print(queue.dequeue())  # 3
