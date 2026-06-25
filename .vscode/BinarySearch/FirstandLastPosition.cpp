#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int first = -1;
        int last = -1;

        // Find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            }
            else if (nums[mid] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        // Find last occurrence
        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;
            }
            else if (nums[mid] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return {first, last};
    }
};

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 10};
    int x = 4;

    Solution obj;

    vector<int> result = obj.searchRange(arr, x);

    if (result[0] == -1) {
        cout << "Target does not exist" << endl;
    }
    else {
        cout << "First index: " << result[0] << endl;
        cout << "Last index: " << result[1] << endl;
    }

    return 0;
}