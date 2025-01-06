#include <vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i = 0;
        
        while (i < n - 1) {
            if (bits[i] == 1) {
                i += 2; // Skip the two-bit character
            } else {
                i += 1; // Move to the next bit
            }
        }
        
        // If we stopped at the last index, it's a one-bit character
        return i == n - 1;
    }
};
