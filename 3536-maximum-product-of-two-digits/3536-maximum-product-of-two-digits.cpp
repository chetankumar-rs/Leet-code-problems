class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;

        while(n > 0)
        {
            int rem = n % 10;
            arr.push_back(rem);
            n = n / 10;
        }

        sort(arr.begin(),arr.end());

        int  pro = arr[arr.size()-2] * arr[arr.size()-1];
        return pro;
    }
};