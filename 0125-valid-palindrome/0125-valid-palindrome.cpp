class Solution {
public:
    bool check(char s){
        if((s>='a' && s<='z')|| (s>='A' && s<='Z') || (s>='0' && s<='9')){
            return true;
        }
        return false;
        
    }
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while(i<j && !check(s[i])){
                i++;
            }
            while(i<j && !check(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;

        }
        return true;
    }
};