class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int prev = nums[0];
        int curr = nums[0];
        
        do {
            prev = nums[prev];
            curr = nums[nums[curr]];
        } while (prev != curr);
        
        prev = nums[0];
        while (prev != curr) {
            prev = nums[prev];
            curr = nums[curr];
        }
        
        return prev;
    }
};

