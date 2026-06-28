#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
   
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%2==0){
            return false;
        }
    }
    return true;
}

int Palindrome(int n){
    int reverse=0;
    int original=n;
    while(original!=0){
        int reminder=original%10;
        reverse=reverse*10+reminder;
        original=original/10;
    }
    return reverse;
}

int main(){
    int n=111;
    // cout << fixed << setprecision(2) << sqrt(n);
    int reverse= Palindrome(n);
    if(n==reverse){
        cout<<"this is palindrom";
    }
    else{
        cout<<"Not Palindrom";
    }

}