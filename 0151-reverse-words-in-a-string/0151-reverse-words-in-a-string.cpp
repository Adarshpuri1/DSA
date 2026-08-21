class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       string word;
       vector<string>words;
       while(ss>>word){
        words.push_back(word);
       }
       reverse(words.begin(),words.end());
       string ans;
       for(string wor: words){
        ans += wor +" ";
       }
       ans.pop_back();
       return ans;
    }
};