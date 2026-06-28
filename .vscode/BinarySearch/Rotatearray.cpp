#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return nums[low];
    }
};

int main() {
    Solution obj;

    vector<int> arr = {3,4,5,0,1,2};

    cout << "Lowest element"<<" " << obj.findMin(arr);

    return 0;
}