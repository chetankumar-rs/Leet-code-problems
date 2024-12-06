class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> mySet(banned.begin(), banned.end());
        int sum = 0, cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (mySet.find(i) == mySet.end()) {
                if(sum+i > maxSum){
                    break;
                }
                sum += i;
                cnt++;
            }
        }

        return cnt;
    }
};
