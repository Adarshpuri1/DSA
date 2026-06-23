#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int sum = 0;

        // first window sum
        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int low = 0;
        int high = k - 1;
        int res = sum;

        while(high < arr.size() - 1) {
            low++;
            high++;

            sum = sum - arr[low - 1];
            sum = sum + arr[high];

            res = max(sum, res);
        }

        return res;
    }
};

int main() {
    vector<int> arr = {100, 200, 300, 400};
    int k = 2;

    Solution obj;
    cout << "Maximum subarray sum of size " << k << " is: "
         << obj.maxSubarraySum(arr, k);

    return 0;
}