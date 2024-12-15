
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>myMap;

        for(int i = 0;i < nums.size();i++)
        {
            myMap[nums[i]]++;
        }
        for(const auto& pair : myMap){
            if(pair.second == 1)
            return pair.first;
        }
        return 0;
        
    }
};
