class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> myMap;
        vector<int> res;

        
        for (int num : nums1) {
            myMap[num]++;
        }

        for (int num : nums2) {
            if (myMap[num] > 0) {
                res.push_back(num);
                myMap[num]--;
            }
        }

        return res;
    }
};
