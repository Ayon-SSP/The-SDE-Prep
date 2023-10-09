# /739. Daily Temperatures
class Solution(object):
    def dailyTemperatures(self, temperatures):
        nxtG = [0]*(len(temperatures))
        idxStack = []

        for eleIdx,ele in enumerate(temperatures):
            while len(idxStack) and ele > idxStack[-1][1]:
                curreleIdx,currele = idxStack.pop()
                nxtG[curreleIdx] = eleIdx - curreleIdx

            idxStack.append([eleIdx,ele])
        return nxtG
