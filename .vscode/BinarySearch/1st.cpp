#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int ans = arr.size();

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 5, 7};
    int target = 2;

    int index = lowerBound(arr, target);

    cout << "Lower Bound Index: " << index << endl;

    if (index < arr.size()) {
        cout << "Lower Bound Value: " << arr[index] << endl;
    } else {
        cout << "No value greater than or equal to target" << endl;
    }

    return 0;
}