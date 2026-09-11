class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int num = 0;

        unordered_set<int>st;

        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                for(int k = 0;k < n;k++)
                {
                    if(i != j && j != k && k != i && digits[i] != 0 && digits[k] % 2 == 0)
                    {
                        num = digits[i] * 100 + digits[j] * 10 +digits[k];
                        st.insert(num);
                    }
                }
            }
        }
        return st.size();
    }
};