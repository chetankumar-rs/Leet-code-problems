class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        if(n == 2)
        {
            return (nums[0] - 1)*(nums[1] - 1);
        }

        int sec = -1;
        int first = -1;

        for(int i = 0;i < n;i++)
        {
            if(nums[i] >= first)
            {
                sec = first;
                first = nums[i];
            }
            else if(nums[i] > sec)
            {
                sec = nums[i];
            }
        }

        return (first-1)*(sec-1);
    }
};