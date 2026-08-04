class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>res;

        for(int i = 1;i < n;i++)
        {
            if(nums[i] - 1 != nums[i-1])
            {
                int k = 1;
                while(nums[i-1] + k < nums[i]){
                res.push_back(nums[i-1] + k);
                k++;
                }
            }
        }
        return res;
    }
};