class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> pattToWord; 
        unordered_map<string, char> wordToPatt;
        
        stringstream ss(s);
        vector<string> words;
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        
       
        if (pattern.length() != words.size()) {
            return false;
        }
        
        for (int i = 0; i < pattern.length(); i++) {
            char p = pattern[i];
            string w = words[i];
            
           
            if (pattToWord.count(p)) {
                if (pattToWord[p] != w) {
                    return false;
                }
            } else {
                pattToWord[p] = w;
            }
            
            if (wordToPatt.count(w)) {
                if (wordToPatt[w] != p) {
                    return false;
                }
            } else {
                wordToPatt[w] = p;
            }
        }
        
        return true;
    }
};
