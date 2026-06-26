#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;   // or return high;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {0, 2, 5, 7, 6, 4, 1};

    cout << "Peak Index = " << obj.peakIndexInMountainArray(arr);

    return 0;
}