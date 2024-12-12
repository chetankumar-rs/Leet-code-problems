class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for (int gift : gifts) {
            pq.push(gift);
        }
        for (int i = 0; i < k; ++i) {
            int maxPile = pq.top();
            pq.pop();
            pq.push(floor(sqrt(maxPile)));
        }
        long long total = 0;
        while (!pq.empty()) {
            total = total + pq.top();
            pq.pop();
        }
        return total;
    }
};
