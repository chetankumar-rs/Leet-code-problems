class Solution {
public:
    void sortColors(vector<int>& nums) {
         int cntZeroes = 0;
         int cntOnes = 0;
         int cntTwos = 0;

         for(int i =0;i < nums.size();i++)
         {
            if(nums[i] == 0)
            cntZeroes++;
            else if(nums[i] == 1)
            cntOnes++;
            else 
            cntTwos++;
            int index = 0;
            for(int i = 0;i < cntZeroes;i++)
            {
               nums[index++] = 0;
            }
             for(int i = 0;i < cntOnes;i++)
            {
               nums[index++] = 1;
            }
             for(int i = 0;i < cntTwos;i++)
            {
               nums[index++] = 2;
            }
         }
        
    }
};
