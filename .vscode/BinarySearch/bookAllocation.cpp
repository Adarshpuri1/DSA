#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPossible(vector<int> &arr, int k, long long mid) {
        int stu = 1;
        long long bookpage = 0;

        for (int i = 0; i < arr.size(); i++) {

            if (bookpage + arr[i] <= mid) {
                bookpage += arr[i];
            } else {
                stu++;
                bookpage = arr[i];

                if (stu > k)
                    return false;
            }
        }

        return true;
    }

    int findPages(vector<int> &arr, int k) {

        int n = arr.size();

        if (k > n)
            return -1;

        long long low = *max_element(arr.begin(), arr.end());
        long long high = 0;

        for (int x : arr)
            high += x;

        long long ans = -1;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            if (isPossible(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return (int)ans;
    }
};

int main() {

    Solution obj;

    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    cout << obj.findPages(arr, k);

    return 0;
}