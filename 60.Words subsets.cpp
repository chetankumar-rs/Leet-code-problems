class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq;
        vector<string> res;

        // Step 1: Calculate the maximum frequency of each character required by words2
        for (const auto& word : words2) {
            unordered_map<char, int> wordFreq;
            for (char c : word) {
                wordFreq[c]++;
            }
            for (const auto& pair : wordFreq) {
                maxFreq[pair.first] = std::max(maxFreq[pair.first], pair.second);
            }
        }

        // Step 2: Check each word in words1 against the max frequency map for words2
        for (const auto& word : words1) {
            unordered_map<char, int> wordFreq;
            for (char c : word) {
                wordFreq[c]++;
            }

            // Check if the word satisfies the frequency requirements for all characters in maxFreq
            bool isValid = true;
            for (const auto& pair : maxFreq) {
                if (wordFreq[pair.first] < pair.second) {
                    isValid = false;
                    break;  // Early exit if the word does not satisfy the condition
                }
            }

            if (isValid) {
                res.push_back(word);
            }
        }

        return res;
    }
};
