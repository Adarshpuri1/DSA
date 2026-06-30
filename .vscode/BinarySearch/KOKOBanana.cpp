#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;   // Better to avoid overflow
            long long hour = 0;

            for (int i = 0; i < piles.size(); i++) {
                hour += (piles[i] + mid - 1) / mid;   // Ceiling division
            }

            if (hour <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << obj.minEatingSpeed(piles, h);

    return 0;
}