class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size())
            return s;

        int n = s.size();

        string rowStrings[numRows];
        for(int i = 0;i < numRows;i++)
        {
            rowStrings[i] = "";
        }
        int i = 0;
        int j = 0;
        int index = 0;

        while(index < n)
        {
            while(index < n && i < numRows)
            {
                rowStrings[i].push_back(s[index++]);
                i++;
            }

            i -= 2;
            j++;

            while(index < n && i >= 0)
            {
                rowStrings[i].push_back(s[index++]);
                i--;
                j++;
            }

            i = 1;
            j--;
            
        }
        string result = "";

            for(int i = 0;i < numRows;i++)
            {
                result.append(rowStrings[i]);
            }
        return result;
    }
};