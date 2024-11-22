class Solution {
public:
    long long minimumSteps(string s) {
     long long swaps = 0;  // Use plural for clarity
        int blackCount = 0;   // Use descriptive variable names

        // Iterate through the string
        for (char ball : s) {
            if (ball == '0') {
                swaps += blackCount;  // Count how many '1's need to swap with this '0'
            } else {
                blackCount++;  // Increment count of '1's (black balls)
            }
        }
        return swaps;      
    }
};
