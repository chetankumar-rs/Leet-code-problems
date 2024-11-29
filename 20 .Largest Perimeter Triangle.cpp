class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
      int n  = nums.size();
        sort(nums.begin(),nums.end());
        bool valid =false;
        int maxPerimeter = 0;
      for(int i = 0;i < n-2;i++){
        if(nums[i] + nums[i+1] > nums[i+2]){
            valid = true;

            if(valid){
                maxPerimeter = max(maxPerimeter,nums[i] + nums[i+1] + nums[i+2]);
            }
        }
      }
      return maxPerimeter;  
    }
};
