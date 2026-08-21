class Solution {
public:
    string removeOccurrences(string s, string part) {
        int len=part.length();
      while(s.length()>0 && s.find(part)<s.length()){
        int pos=s.find(part);
        s.erase(pos,len);
      }
      return s;
    }
};