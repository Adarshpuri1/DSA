class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi=0;
        int maxchar=nums[0];
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second>maxi){
                maxi=it.second;
                maxchar=it.first;
            }
        }
        return maxchar;

        return -1;
    }
};