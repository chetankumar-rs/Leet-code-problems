class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>myMap;

        for (char c : s) {
            myMap[c]++;
        }

        for(int i = 0;i < s.size();i++)
        {
            if(myMap[s[i]] == 1)
            return i;
        }
        return -1;
    }
};
