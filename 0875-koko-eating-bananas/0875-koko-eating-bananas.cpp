class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high= *max_element(piles.begin(),piles.end());
        int ans= *max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=(low+high)/2;
            long long hours=0;
            for(int i=0; i<piles.size(); i++){
                hours=hours+(piles[i]+mid-1)/mid;
            }
            if(h >= hours){
                ans=mid;
                high=mid-1;
            }else{
                hours=0;
                low=mid+1;
            }
        }
        return ans;
        
    }
};