class Solution {
public:
    int romanToInt(string s) {
        // Define a hashmap to store the Roman numerals and their integer values
        unordered_map<char, int> roman_num = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0; // Initialize the result variable
        int n = s.length(); // Get the length of the input string

        // Iterate over each character in the string
        for (int i = 0; i < n; i++) {
            int value = roman_num[s[i]]; // Get the integer value of the current Roman numeral

            // Check if the next numeral is larger than the current numeral
            if (i + 1 < n && roman_num[s[i + 1]] > value) {
                // If true, subtract the current value from the result (special case in Roman numerals)
                ans -= value;
            } else {
                // Otherwise, add the current value to the result
                ans += value;
            }
        }
        return ans; // Return the final computed integer value
    }
};
