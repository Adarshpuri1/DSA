#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPos(vector<int> &arr,int l,int r, int key)
    {
        int left=l;
        int right=r;
        int pos=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]==key){
                pos=mid;
                break;
            }
            else if(arr[mid]>key){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return pos;
    }
    int infinitearr(vector<int> &arr, int key){
        int l=0;
        int r=1;
        while(r<arr.size() && arr[r]<key){
            l=r;
            r=r*2;
        }
        if (r >= arr.size()){
            r = arr.size() - 1;
        }
        return findPos(arr,l, r ,key);
    }
};

int main()
{
    vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int x = 90;

    Solution obj;

    int index = obj.infinitearr(arr, x);
    if (index == -1)
    {
        cout << "not Exist" << endl;
    }
    else
    {
        cout << "Pos of index: " << index << endl;
    }
}