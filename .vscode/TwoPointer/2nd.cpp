#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2};
    int length=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=0;
    unordered_map<int,int>mp;
    while (high<length)
    {
        mp[arr[high]]++;
        while(mp[arr[high]]>1){
            mp[arr[low]]--;
            low++;
        }
        high++;
    }
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    
    
}