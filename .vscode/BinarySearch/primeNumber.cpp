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
int digit(int n){
    int num=n;
    int count=0;
    while(num!=0){
        int reminder=num%10;
        count=count+1;
        num=num/10;
    }
    int number=n;
    int ans=0;
    while(number!=0){
        int reminder=number%10;
        ans += pow(reminder,count);
        number=number/10;
    }
    return ans;

}

int main(){
    
    // cout << fixed << setprecision(2) << sqrt(n);
    // int reverse= Palindrome(n);
    // if(n==reverse){
    //     cout<<"this is palindrom";
    // }
    // else{
    //     cout<<"Not Palindrom";
    // }
    int n=123;

    int i=0;
    int j=1;

    for(int i=0; i<5; i++){
        
    }
    




}