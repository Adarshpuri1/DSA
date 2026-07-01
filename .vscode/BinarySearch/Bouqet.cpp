#include<bits/stdc++.h>
using namespace std;

class Solution {

    // Function to count how many bouquets can be made
    // if we wait till 'mid' days.
    int canMakeBouquet(vector<int>& bloomDay, int mid, int k){

        // Number of consecutive bloomed flowers
        int cons = 0;

        // Number of bouquets formed
        int bloom = 0;

        for(int i = 0; i < bloomDay.size(); i++){

            // Flower has bloomed by day 'mid'
            if(bloomDay[i] <= mid){

                cons++;

                // We got k consecutive flowers
                if(cons == k){
                    bloom++;
                    cons = 0; // Start counting for the next bouquet
                }
            }
            else{
                // Flower has not bloomed, so adjacency breaks
                cons = 0;
            }
        }

        return bloom;
    }

public:

    int minDays(vector<int>& bloomDay, int m, int k) {

        // Impossible case
        if((long long)m * k > bloomDay.size())
            return -1;

        // Binary search on number of days
        int st = 1;

        // Maximum possible day
        int end = *max_element(bloomDay.begin(), bloomDay.end());

        int mini = -1;

        while(st <= end){

            int mid = st + (end - st) / 2;

            // Check if we can make at least m bouquets
            if(canMakeBouquet(bloomDay, mid, k) >= m){

                // Current day works, store it
                mini = mid;

                // Try to find a smaller valid day
                end = mid - 1;
            }
            else{

                // Need to wait more days
                st = mid + 1;
            }
        }

        return mini;
    }
};

int main(){

    Solution obj;

    vector<int> bloomDay = {1,10,3,10,2};

    int m = 3;
    int k = 1;

    cout << "Minimum Days = "
         << obj.minDays(bloomDay, m, k);

    return 0;
}