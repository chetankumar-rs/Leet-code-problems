class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       set<char>mySet(jewels.begin(),jewels.end());
       int count = 0;
      for(int i = 0;i < stones.length();i++){
            if(mySet.find(stones[i]) != mySet.end())
            count++;
       } 
       return count;
    }
};
