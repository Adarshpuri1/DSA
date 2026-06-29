#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int peakIndex = obj.findPeakElement(nums);

    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << nums[peakIndex] << endl;

    return 0;
}