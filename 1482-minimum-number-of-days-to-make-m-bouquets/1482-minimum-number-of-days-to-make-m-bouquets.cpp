class Solution {
    int canMakeBloom(vector<int> bloomDay, int mid, int k){
        int bouquet=0;
        int canmake=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid){
                canmake ++;
                if(canmake==k){
                    bouquet++;
                    canmake=0;
                }
            }else{
                canmake=0;
            }
        }
        return bouquet;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int s=0;
        int e= *max_element(bloomDay.begin(),bloomDay.end());
        int minDay=-1;
        while(s<=e){
            int mid= (s+e)/2;
            if(canMakeBloom(bloomDay,mid,k)>=m){
                minDay=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return minDay;
    }
};