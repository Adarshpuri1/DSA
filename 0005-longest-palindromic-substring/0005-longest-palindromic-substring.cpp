class Solution {
public:
    string longestPalindrome(string s) {
        int st=0;
        int max=1;
        for(int i=0; i< s.size(); i++){
            //odd size
            int l=i;
            int r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>max){
                    st=l;
                    max=r-l+1;
                }
                l--;
                r++;
            }
            //even size
            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>max){
                    st=l;
                    max=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(st,max);
    }
};