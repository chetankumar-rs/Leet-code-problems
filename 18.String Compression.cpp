class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n == 1) {
            return 1;
        }

        int res = 0;
        int i = 0;

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            while (i < n && chars[i] == currentChar) {
                count++;
                i++;
            }

            chars[res++] = currentChar;

            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[res++] = c;
                }
            }
        }

        return res;
    }
};
