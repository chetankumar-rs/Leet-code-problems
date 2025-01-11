class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>sets;
        vector<int>elements;

        int n = nums.size();
        int total = pow(2,n);

        for(int i = 0;i < total;i++)
        {
            elements.clear();
            for(int j = 0;j < n;j++)
            {
                if(i&(1<<j))
                {
                    elements.push_back(nums[j]);
                }
            }
            sets.push_back(elements);
        }
        return sets;
    }

};
