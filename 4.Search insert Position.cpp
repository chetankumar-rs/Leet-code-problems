class Solution {
public:
    // Function to search for the target or find the correct insertion position
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        // Binary search loop
        while (low <= high) {
            int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow

            if (nums[mid] == target) 
                return mid;  // If target is found, return its position
            else if (nums[mid] < target) 
                low = mid + 1;  // Move to the right half if target is greater
            else 
                high = mid - 1;  // Move to the left half if target is smaller
        }

        // If target is not found, 'low' will be the correct insertion position
        return low;
    }
};
