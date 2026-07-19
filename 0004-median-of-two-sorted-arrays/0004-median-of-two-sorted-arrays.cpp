class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        num1.insert(num1.end(),num2.begin(),num2.end());
        sort(num1.begin(),num1.end());
        if(num1.size() % 2 == 0)
        {
            int mid = num1.size() / 2;
            return (double)(num1[mid] + num1[mid-1]) / 2;
        }
            return (double)num1[num1.size()/2];
        
    }
};