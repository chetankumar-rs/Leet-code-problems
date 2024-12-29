class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int,greater<int>>mySet(nums.begin(),nums.end());

       if(mySet.size() < 3){
        return *mySet.begin();
       }
       auto it = mySet.begin();
       advance(it,2);
       return *it;

    }
};
