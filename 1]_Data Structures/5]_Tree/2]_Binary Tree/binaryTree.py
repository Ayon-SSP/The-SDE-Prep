class BinaryTree:

    def __init__(self, value):

        self.left = None
        self.right = None
        self.value = value

    def insert(self, value):

        if self.value:
            if data < self.value:
                if self.left is None:
                    self.left = BinaryTree(value)
                else:
                    self.left.insert(value)
            elif data > self.value:
                if self.right is None:
                    self.right = BinaryTree(value)
                else:
                    self.right.insert(value)
        else:
            self.value = value

    def PrintTree(self):
        if self.left:
            self.left.PrintTree()
        print( self.data),
        if self.right:
            self.right.PrintTree()

root = BinaryTree(100)
root.insert(50)
root.insert(55)
root.insert(60)
root.insert(20)
root.insert(52)


root.PrintTree()