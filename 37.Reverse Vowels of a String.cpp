class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (end > start) {
            while (end > start && !isVowel(s[start])) {
                start++;
            }
            while (end > start && !isVowel(s[end])) {
                end--;
            }

            swap(s[start], s[end]);

            start++;
            end--;
        }

        return s;
    }
};



