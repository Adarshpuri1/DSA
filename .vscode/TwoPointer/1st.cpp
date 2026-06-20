#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,0,1,0,1};
    int strindex=0;
    int endindex=4;
    while(strindex<endindex){
        if(arr[strindex]==1 && arr[endindex]==0){
            swap(arr[strindex],arr[endindex]);
            strindex++;
            endindex--;
        }else if(arr[strindex]==0){
            strindex++;
        }
        else{
            endindex--;
        }
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}