class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int total = 0;
        
        for(int i = 0;i < n;i++)
        {
            int x = s[i] - 'a'+ 1;
            int reverse = 27-x;
            total += (i+1) * reverse;
        }
        return total;
    }
};