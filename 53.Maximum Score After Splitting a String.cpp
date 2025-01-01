class Solution {
public:
    int maxScore(string s) {
        int bestScore = 0;
        int totalOnes = count(s.begin(),s.end(),'1');
        int leftZeroes = 0;
        int rightOnes = totalOnes;
         
        for(int i = 0;i < s.length() - 1;i++)
        {
            if(s[i] == '0'){
                leftZeroes++;
            }
            else{
                rightOnes--;
            } 
            bestScore = max(bestScore,leftZeroes + rightOnes);       
        }
        return bestScore;
    }
};
