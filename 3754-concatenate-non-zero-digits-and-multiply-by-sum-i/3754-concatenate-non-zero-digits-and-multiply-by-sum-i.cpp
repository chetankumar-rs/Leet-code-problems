class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long newNum = 0;
        long long place = 1;

        while(n>0)
        {
            int rem = n % 10;
            sum = sum + rem;
            if(rem != 0)
            {
                newNum = newNum + 1LL*rem*place;
                place *= 10;
            }
            n /= 10;
        }
        return newNum*sum;
    }
};