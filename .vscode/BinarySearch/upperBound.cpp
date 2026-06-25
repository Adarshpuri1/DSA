#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int UpperBound(vector<int>& arr, int x) {
        // code here
        int left=0;
        int right=arr.size()-1;
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]>=x){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int x = 5;

    Solution obj;

    int index = obj.UpperBound(arr, x);

    if (index == -1) {
        cout << "Ceil does not exist" << endl;
    } else {
        cout << "Ceil index: " << index << endl;
        cout << "Ceil value: " << arr[index] << endl;
    }

    return 0;

}