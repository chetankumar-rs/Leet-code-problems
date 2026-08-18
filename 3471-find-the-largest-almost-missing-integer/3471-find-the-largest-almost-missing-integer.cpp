class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == 1)
        {
            unordered_map<int,int>mp;

            for(int i = 0;i < n;i++)
            {
                mp[nums[i]]++;
            }

            int ans = -1;

            for(auto ele : mp)
            {
                if(ele.second == 1)
                {
                    ans = max(ans,ele.first);
                }
            }
            return ans;
        }

        if(k == n)
        {
            return *max_element(nums.begin(),nums.end());
        }

        int ans = -1;
        int first = 0;
        int last = 0;

        for(int num : nums)
        {
            if(num == nums[0])
            {
                first++;
            }

            if(num == nums[n-1])
            {
                last++;
            }
        }

        if(first == 1)
        {
            ans = max(ans,nums[0]);
        }

        if(last == 1)
        {
            ans = max(ans,nums[n-1]);
        }
        return ans;
    }
};