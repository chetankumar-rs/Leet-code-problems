class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result = "";

        for (char c : s) {
            if (c == '(') {
               
                if (count > 0) 
                result += c; 
                count++;
            } else if (c == ')') {
                count--;
               
                if (count > 0) 
                result += c; 
            }
        }
        return result;
    }
};
