class Solution {
public:
    void reverseString(vector<char>& s) {
      int start =0;
      int end =s.size()-1;
      while(end >= start){
       char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
        //swap(s[start],s[end]);
      }
    }
};
