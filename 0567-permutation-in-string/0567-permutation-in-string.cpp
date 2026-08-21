class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>s1mp;
        unordered_map<char,int>s2mp;
        for(int i=0; i<s1.length(); i++){
            s1mp[s1[i]]++;
        }
        int low=0;
        int high=0;
        while(high<s2.length()){
            s2mp[s2[high]]++;
            while((high-low+1)>s1.size()){
                s2mp[s2[low]]--;
                if(s2mp[s2[low]]==0){
                    s2mp.erase(s2[low]);
                }
                low++;
            }
            if((high-low+1)==s1.size()){
                if(s1mp==s2mp){
                    return true;
                }
            }
            high++;
        }
        return false;
    }
};