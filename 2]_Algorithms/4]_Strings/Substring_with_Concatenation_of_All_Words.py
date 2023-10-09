class Solution:
  def findSubstring(self, s: str, words: List[str]) -> List[int]:
    # Check for edge cases: if s is empty or words is empty, return an empty list
    if len(s) == 0 or words == []:
      return []

    # Initialize variables
    k = len(words)  # Number of words in the input 'words' list
    n = len(words[0])  # Length of each word in the 'words' list
    ans = []  # Initialize a list to store the starting indices of valid substrings
    count = collections.Counter(words)  # Count the occurrences of each word in 'words'

    # Iterate through 's' to find valid substrings
    for i in range(len(s) - k * n + 1):
      seen = collections.defaultdict(int)  # A dictionary to keep track of words seen so far
      j = 0  # Initialize a pointer 'j' to 0
      while j < k:
        # Extract a word of length 'n' starting from position 'i + j * n'
        word = s[i + j * n: i + j * n + n]
        seen[word] += 1  # Increment the count of the word in 'seen'
        
        # If we have seen more occurrences of 'word' than what's allowed by 'count'
        if seen[word] > count[word]:
          break  # Break out of the loop as this is not a valid substring
        
        j += 1  # Move to the next word
        
      # If we have seen all the words in 'words' exactly 'count' times, add 'i' to 'ans'
      if j == k:
        ans.append(i)

    return ans  # Return the list of starting indices of valid substrings
