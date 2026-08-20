class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
         int maxfreq=0;
         int low=0;
         int ans=0;
         for(int high=0; high<s.size(); high++){
            mp[s[high]]++;
            maxfreq=max(maxfreq,mp[s[high]]);
            while((high-low+1)-maxfreq>k){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            ans=max(ans,high-low+1);
         }
         return ans;
    }
};