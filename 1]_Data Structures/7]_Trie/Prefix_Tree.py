# /208. Implement Trie (Prefix Tree)

class TrieNode:
    def __init__(self):
        self.childrens = {}
        self.endOfWord = False

class Trie:

    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        cur = self.root
        
        for c in word:
            if c not in cur.childrens:
                cur.childrens[c] = TrieNode()
            cur = cur.childrens[c]
        cur.endOfWord = True

    def search(self, word: str) -> bool:
        cur = self.root

        for c in word:
            if c not in cur.childrens:
                return False
            cur = cur.childrens[c]
        return cur.endOfWord

    def startsWith(self, prefix: str) -> bool:
        cur = self.root

        for c in prefix:
            if c not in cur.childrens:
                return False
            cur = cur.childrens[c]
        return True


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
