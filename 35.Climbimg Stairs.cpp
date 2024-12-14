class Solution {
public:
    int climbStairs(int n) {
    
     if(n == 0) return 1;
     if(n == 1) return 1;
    int rec[n+1];
    rec[0] = 1;
    rec[1] = 1;
     
    for( int i =2; i <= n;i++){
        rec[i] = rec[i -1] + rec[i - 2];
    }

    return rec[n];

    }
};
