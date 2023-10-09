class Solution {
public:
    bool isPalindrome(int x) {
        // Check if the input integer is negative; negative numbers can't be palindromes.
        if (x < 0) {
            return false;
        }

        long long reversed = 0;  // Initialize a variable to store the reversed integer.
        long long temp = x;      // Make a copy of the input integer to avoid modifying it.

        // Reverse the input integer.
        while (temp != 0) {
            int digit = temp % 10;     // Get the last digit of temp.
            reversed = reversed * 10 + digit;  // Add the last digit to the reversed number.
            temp /= 10;               // Remove the last digit from temp.
        }

        // Check if the reversed integer is equal to the original input; if yes, it's a palindrome.
        return (reversed == x);
    }
};
