class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        int ans=-1;
        while(l<h){
            int mid= (l+h)/2;
            if(arr[mid]>arr[mid+1]){
                ans=mid;
                h=mid;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};