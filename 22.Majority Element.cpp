class Solution {
public:
    int majorityElement(vector<int>& nums) {
          unordered_map<int,int>mymap;
        int n = nums.size();

        vector<int>res;
        for(int i =0 ;i < n;i++){
            mymap[nums[i]]++;
        }

        for(const auto& ele : mymap){
            if(ele.second > n/2){
                return ele.first;
            }
        }
        return 0;
    }
};
