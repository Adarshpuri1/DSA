#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int ans = 0;

    while (left <= right) {
        int mid = (right + left) / 2;

        if (arr[mid] > target) {
            right = mid - 1;
        }
        else if(arr[mid]<target){
            left=mid+1;
        } 
        else {
            ans = mid;
            break;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 7};
    int target = 5;

    int index = BinarySearch(arr, target);

    cout << "Target Index: " << index << endl;

    return 0;
}