class Solution {
public:
    string reverseWords(string s) {
      stringstream ss(s);
      string temp;
      vector<string>words;
      while(ss>>temp){
        words.push_back(temp);
      }
      reverse(words.begin(),words.end());
      string ans;
      for(string x: words){
        ans +=x +" ";
      }
      ans.pop_back();
      return ans;
    }
};