class Solution {
public:
    string nextTerm(const string& term){
        int n = term.size();
        string result = "";
        for(int  i = 0;i < n;i++){
            int count = 1;
            while(i+1 < n && term[i] == term[i+1]){
                ++count;
                ++i;
            }
            result += to_string(count)+term[i];
        }
        return result;
    }
    string countAndSay(int n) {
          string term = "1";

          for(int i = 1;i < n;i++){
            term = nextTerm(term);
          }
          return term;
        }
};
