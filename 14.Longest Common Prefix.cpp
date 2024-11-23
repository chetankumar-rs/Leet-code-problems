class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int pt = 0, i;          // `pt` is used to track the current character index for comparison
        string s;               // `s` will store the longest common prefix
        int n = strs.size();    // Get the number of strings in the vector `strs`
        
        // Loop through characters of the first string (`strs[0]`) until the end of the string is reached
        while (pt < strs[0].size()) {
            
            // Compare the `pt`-th character of the first string with the corresponding characters of all other strings
            for (i = 1; i < n; i++) {
                
                // If the current character does not match or `pt` exceeds the length of a string, return the common prefix found so far
                if (strs[0][pt] != strs[i][pt] || pt >= strs[i].size()) {
                    return s;  // Return the current longest common prefix stored in `s`
                }
            }
            
            // If all strings have the same character at index `pt`, add it to the common prefix `s`
            s.push_back(strs[0][pt]);
            pt++;  // Move to the next character index
        }
        
        return s;  // Return the longest common prefix found
    }
};
