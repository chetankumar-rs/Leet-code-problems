class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k = 0; // Pointer for the position of the next non-val element

    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move the non-val element to the 'k' position
            k++; // Increment the count of non-val elements
        }
    }

    // Return the number of elements that are not equal to val
    return k;
            }
        
    
};
