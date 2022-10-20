#include <bits/stdc++.h>
using namespace std;

int solveWordWrapUsingMemo(int words[], int n, int length,
						int wordIndex, int remLength,
						vector<vector<int> > memo);

int square(int n) { return n * n; }

int solveWordWrapUtil(int words[], int n, int length,
					int wordIndex, int remLength,
					vector<vector<int> > memo)
{

	// base case for last word
	if (wordIndex == n - 1) {
		memo[wordIndex][remLength]
			= words[wordIndex] < remLength
				? 0
				: square(remLength);
		return memo[wordIndex][remLength];
	}

	int currWord = words[wordIndex];
	// if word can fit in the remaining line
	if (currWord < remLength) {
		return min(solveWordWrapUsingMemo(
					words, n, length, wordIndex + 1,
					remLength == length
						? remLength - currWord
						: remLength - currWord - 1,
					memo),

				square(remLength)
					+ solveWordWrapUsingMemo(
						words, n, length, wordIndex + 1,
						length - currWord, memo));
	}
	else {
		// if word is kept on next line
		return square(remLength)
			+ solveWordWrapUsingMemo(
				words, n, length, wordIndex + 1,
				length - currWord, memo);
	}
}

int solveWordWrapUsingMemo(int words[], int n, int length,
						int wordIndex, int remLength,
						vector<vector<int> > memo)
{
	if (memo[wordIndex][remLength] != -1) {
		return memo[wordIndex][remLength];
	}

	memo[wordIndex][remLength] = solveWordWrapUtil(
		words, n, length, wordIndex, remLength, memo);
	return memo[wordIndex][remLength];
}

int solveWordWrap(int words[], int n, int k)
{

	vector<vector<int> > memo(n, vector<int>(k + 1, -1));

	return solveWordWrapUsingMemo(words, n, k, 0, k, memo);
}
int main()
{
	int words[] = { 3, 2, 2, 5 };
	int n = sizeof(words) / sizeof(words[0]);
	int k = 6;

	cout << solveWordWrap(words, n, k);
	return 0;
}
