class Solution {
public:
    bool isPalindrome(int x) {
        // Check if the number is negative using signbit.
        // Assign -1 to 'sign' if the number is negative, otherwise 1.
        int sign = signbit(x) ? -1 : 1;

        // Store the original number in 'n' for later comparison.
        long long int n = x;

        // Variables for storing remainder and the reversed number.
        long long int rem, ans = 0;

        // Reverse the given number.
        while (x > 0) {
            rem = x % 10;   // Get the last digit of the number.
            x = x / 10;     // Remove the last digit.
            ans = ans * 10 + rem;  // Construct the reversed number.
        }

        // Multiply the reversed number by the sign to handle negative numbers.
        ans = ans * sign;

        // Check if the reversed number is equal to the original.
        if (ans == n) {
            return true;    // If equal, it's a palindrome.
        }
        else {
            return false;   // Otherwise, it's not a palindrome.
        }
    }
};
