class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); // Get the size of the array
        k = k % n; // Handle cases where k is greater than the size of the array

        // Step 1: Store the last k elements in a temporary array
        vector<int> temp(k);
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i]; // Copy the last k elements into temp
        }

        // Step 2: Shift the remaining elements to the right by k positions
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k]; // Shift each element to its new position
        }

        // Step 3: Copy the stored elements back to the beginning of the array
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i]; // Place the elements from temp at the start
        }
    }
};
