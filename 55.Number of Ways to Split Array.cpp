class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long>prefixSum(n+1,0);
      for(int i = 0;i < nums.size();i++)
      {
        prefixSum[i+1] = prefixSum[i] + nums[i];
      }
      int count = 0;
      for(int i = 1;i < n;i++)
      {
        if(prefixSum[i] >= prefixSum[n] - prefixSum[i])
        {
            count++;
        }
      }
      return count;
    }
};
