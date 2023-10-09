class Solution {
public:
    string convert(string s, int numRows) {
        // If numRows is 1 or numRows is greater than or equal to the length of s, 
        // there's no need to perform the zigzag conversion, return the original string.
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
        
        // Create an empty string to store the result of the zigzag conversion.
        string result;
        int n = s.length();  // Length of the input string s.
        int cycleLen = 2 * numRows - 2;  // Length of each "zigzag cycle".

        // Iterate through each row of the zigzag pattern.
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += cycleLen) {
                // Append the character at position j+i to the result string.
                result.push_back(s[j + i]);
                
                // If we're not in the first or last row and there's a character
                // inside the zigzag cycle to be added, append it as well.
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n) {
                    result.push_back(s[j + cycleLen - i]);
                }
            }
        }
        
        // Return the result string containing the zigzag conversion of the input string.
        return result;
    }
};
