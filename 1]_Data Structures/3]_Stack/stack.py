class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if self.is_empty():
            return IndexError("Stack is empty")

        return self.items.pop()

    def peek(self):
        if self.is_empty():
            return IndexError("Stack is empty")

        return self.items[len(self.items) - 1]

    def size(self):
        return len(self.items)

stack = Stack()
print(stack.is_empty()) # True
print(stack.size()) # 0
print(stack.peek()) # IndexError
print(stack.pop()) # IndexError

stack.push(1)
print(stack.is_empty()) # False
print(stack.size()) # 1
print(stack.peek()) # 1
print(stack.pop()) # 1
print(stack.is_empty()) # True

stack.push(3)
stack.push(2)
stack.push(1)
print(stack.size()) # 3
print(stack.pop()) # 1
print(stack.pop()) # 2
print(stack.pop()) # 3
print(stack.is_empty()) # True