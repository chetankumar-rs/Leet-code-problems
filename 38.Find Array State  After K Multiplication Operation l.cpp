class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
        int small = nums[0];
        int j = 0;
            for(int i = 1;i < nums.size();i++){
            if(nums[i] < small){
                small = nums[i];
                j = i;
            }
        }
         nums[j] = small * multiplier;
        }
        return nums;
    }
};
