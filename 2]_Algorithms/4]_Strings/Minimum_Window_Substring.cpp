class Solution {
public:
  string minWindow(string s, string t) {
    // Create a vector to count characters (ASCII characters, so 128 characters)
    vector<int> count(128);
    
    // Initialize the number of required characters to find
    int required = t.length();
    
    // Initialize the variables to keep track of the best window found
    int bestLeft = -1;  // Starting index of the best window
    int minLength = s.length() + 1;  // Initialize with a length greater than any possible window

    // Count the characters in string 't'
    for (const char c : t)
      ++count[c];

    // Initialize the left and right pointers of the sliding window
    for (int l = 0, r = 0; r < s.length(); ++r) {
      // Decrease the count of character 's[r]' in the vector
      if (--count[s[r]] >= 0)
        --required;
      
      // While we have found all the required characters in the window
      while (required == 0) {
        // Check if the current window is smaller than the previously recorded minimum length
        if (r - l + 1 < minLength) {
          bestLeft = l;  // Update the starting index of the best window
          minLength = r - l + 1;  // Update the minimum window length
        }
        
        // Increase the count of the character at the left end of the window
        if (++count[s[l++]] > 0)
          ++required;
      }
    }

    // If no valid window was found, return an empty string; otherwise, return the minimum window
    return bestLeft == -1 ? "" : s.substr(bestLeft, minLength);
  }
};
