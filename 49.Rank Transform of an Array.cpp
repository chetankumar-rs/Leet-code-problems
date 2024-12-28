class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res(arr.begin(),arr.end());
        sort(res.begin(),res.end());
        unordered_map<int,int>myMap;
        int rank = 1;
        for(int i = 0;i < res.size();i++){
           if (myMap.find(res[i]) == myMap.end()) {
                myMap[res[i]] = rank++;
            }
        }

    for(int  i = 0; i  < arr.size();i++)
    {
        arr[i] = myMap[arr[i]];
    }
        return arr;
    }
};
