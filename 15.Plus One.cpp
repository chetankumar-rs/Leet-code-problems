class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); // Get the size of the digits array
        int i, c = 1; // Initialize a carry variable `c` as 1 to add 1 to the number
        
        // Traverse the array from the last digit to the first
        for(i = n - 1; i >= 0; i--) {
            digits[i] += c; // Add the carry to the current digit
            
            // If the current digit becomes 10 or more, set it to 0 and keep carry as 1
            if(digits[i] > 9) {
                digits[i] = 0;
                c = 1;
            }
            // If the current digit is less than or equal to 9, return the digits as the addition is done
            else if(digits[i] <= 9) {
                return digits;
            }
        }
        
        // If carry is still greater than 0, add it at the beginning of the array
        if(c > 0) {
            digits.insert(digits.begin(), c); // Insert the carry at the beginning
        }
        
        return digits; // Return the modified array
    }
};
