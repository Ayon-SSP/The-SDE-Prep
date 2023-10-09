class Solution:
    dpMemory = {0:0,1:1,2:1}
    def tribonacci(self, n: int) -> int:
        if (n in self.dpMemory) or n<3:
            return self.dpMemory[n]
        self.dpMemory[n] = self.tribonacci(n-3) + self.tribonacci(n-2) + self.tribonacci(n-1)
        return self.dpMemory[n]
