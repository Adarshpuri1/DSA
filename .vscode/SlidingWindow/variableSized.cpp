#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char, int> mp;
        int low = 0;
        int high = 0;
        int res = -1;

        while (high < s.size()) {
            mp[s[high]]++;

            while (mp.size() > k) {
                mp[s[low]]--;
                if (mp[s[low]] == 0) {
                    mp.erase(s[low]);
                }
                low++;
            }

            if (mp.size() == k) {
                int len = high - low + 1;
                res = max(res, len);
            }

            high++;
        }

        return res;
    }
};

int main() {
    string s = "aabacbebebe";
    int k = 3;

    Solution obj;
    cout << "Longest substring length with exactly " << k 
         << " unique characters is: " 
         << obj.longestKSubstr(s, k) << endl;

    return 0;
}