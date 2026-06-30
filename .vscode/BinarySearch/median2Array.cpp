#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums1[4]={1,3,5,7};
    int nums2[4]={2,4,6,8};
    vector<int>arr;
    for(int i=0; i<4; i++){
        arr.push_back(nums1[i]);
    }
    for(int i=0; i<4; i++){
        arr.push_back(nums2[i]);
    }
    sort(arr.begin(),arr.end());
    int low=0;
    int high=arr.size()-1;
    if(arr.size()%2!=0){
        cout<<arr.size()/2;
    }
    else{
        cout<<(arr.size()/2+arr.size()/2-1)/2;
    }

}