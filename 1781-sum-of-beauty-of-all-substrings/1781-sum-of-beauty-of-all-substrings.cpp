class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0; i<s.size(); i++){
            unordered_map<char,int>mp;
            for(int j=i; j<s.size(); j++){
                mp[s[j]]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(auto x: mp){
                    maxi=max(maxi,x.second);
                    mini=min(mini,x.second);
                }
                ans += maxi-mini;
            }
        }
        return ans;
    }
};