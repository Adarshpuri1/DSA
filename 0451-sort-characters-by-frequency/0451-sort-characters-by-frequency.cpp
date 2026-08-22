class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        vector<pair<int,char>>arr;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(auto x: mp){
            arr.push_back({x.second,x.first});
        }
        sort(arr.rbegin(),arr.rend());
        string ans;
        for(auto x: arr){
            for(int i=0; i<x.first; i++){
                ans +=x.second;
            }
        }
        return ans;
    }
};