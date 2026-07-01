#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // currSum stores the sum of the current subarray
        int currSum = 0;

        // Assume the first element is the maximum sum initially.
        // This also handles the case when all numbers are negative.
        int maxSum = nums[0];

        // Traverse the array
        for (int i = 0; i < nums.size(); i++) {

            // Add the current element to the current subarray
            currSum += nums[i];

            // Check if the current subarray gives a better answer
            maxSum = max(maxSum, currSum);

            // If the current sum becomes negative,
            // it will only decrease the sum of any future subarray.
            // So, discard it and start a new subarray from the next element.
            if (currSum < 0) {
                currSum = 0;
            }
        }

        // Return the maximum subarray sum found
        return maxSum;
    }
};

int main() {

    Solution obj;

    // Example input
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Call the function and print the result
    cout << "Maximum Subarray Sum: " << obj.maxSubArray(nums) << endl;

    return 0;
}