class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1){
            return false;
        }
        vector<int>res;
        int n;

        for(int i = 1;i <= num/2;i++){
            if(num % i == 0){
                res.push_back(i);
            }
        }
        int sum = 0;
        for(int i = 0;i < res.size();i++){
            sum += res[i];
        }
        return sum == num;
    }
};
