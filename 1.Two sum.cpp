class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through each element in the nums array
        for(int i = 0; i < nums.size(); i++) {
            // For each element, check the remaining elements in the array
            for(int j = i + 1; j < nums.size(); j++) {
                // If the sum of the two numbers equals the target
                if(nums[i] + nums[j] == target) {
                    // Return the indices of the two numbers
                    return {i, j};
                }
            }
        }
        // If no such pair is found, return an empty array (though the problem guarantees a solution)
        return {};  
    } 
};
