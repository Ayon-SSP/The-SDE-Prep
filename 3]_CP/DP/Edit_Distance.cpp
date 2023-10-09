class Solution
{
public:
    vector<vector<int>> memo;
    int minDistance(string word1, string word2)
    {
        memo.resize(word1.length() + 1, vector<int>(word2.length() + 1, -1));
        return minDistanceRecur(word1, word2, word1.size(), word2.size());
    }

    int minDistanceRecur(string &word1, string &word2, int word1Index, int word2Index)
    {
        if (word1Index == 0)
        {
            return word2Index;
        }
        if (word2Index == 0)
        {
            return word1Index;
        }
        if (memo[word1Index][word2Index] != -1)
        {
            return memo[word1Index][word2Index];
        }
        int minEditDistance = 0;
        if (word1[word1Index - 1] == word2[word2Index - 1])
        {
            minEditDistance = minDistanceRecur(word1, word2, word1Index - 1, word2Index - 1);
        }
        else
        {
            int insertOperation = minDistanceRecur(word1, word2, word1Index, word2Index - 1);
            int deleteOperation = minDistanceRecur(word1, word2, word1Index - 1, word2Index);
            int replaceOperation = minDistanceRecur(word1, word2, word1Index - 1, word2Index - 1);
            minEditDistance = min(insertOperation, min(deleteOperation, replaceOperation)) + 1;
        }
        memo[word1Index][word2Index] = minEditDistance;
        return minEditDistance;
    }
};
