class Solution {
public:
    int reverse(int x) {
        int y=x;
        long long s=0;
        while(y!=0){
            int digit=y%10;
            s=s*10+digit;
            y=y/10;
        }
        if (s > INT_MAX || s < INT_MIN) {
            return 0;
        }
        
        return (int)s;
    }
};