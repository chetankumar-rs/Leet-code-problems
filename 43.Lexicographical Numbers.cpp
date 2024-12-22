//approach 1
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>res;
        for(int i = 1;i <= n;i++){
            res.push_back(i);
        }
        vector<string>result;
        for(auto ele : res){
            result.push_back(to_string(ele));
        }
        sort(result.begin(),result.end());
        for(int i = 0;i < n;i++){
            res[i] = stoi(result[i]);
        }
        return res;
    }
};
//optimized approach
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for (int i = 1; i <= 9; ++i) {
            dfs(i, n, result);
        }
        return result;
    }

private:
    void dfs(int current, int n, vector<int>& result) {
        if (current > n) return;
        result.push_back(current);
        for (int i = 0; i <= 9; ++i) {
            if (current * 10 + i > n) break;
            dfs(current * 10 + i, n, result);
        }
    }
};

