class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramMap;

        for(const auto& word : strs){
            string sortedWord = word;
            sort(sortedWord.begin(),sortedWord.end());
            
            anagramMap[sortedWord].push_back(word);
        }
        vector<vector<string>>result;

        for(const auto& pair : anagramMap){
            result.push_back(pair.second);
        }
        return result;
    }
};
