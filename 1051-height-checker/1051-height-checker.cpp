class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr=heights;
        for(int i=0; i<arr.size(); i++){
            int mini=i;
            for(int j=i+1; j<arr.size(); j++){
                if(arr[mini]>arr[j]){
                    mini=j;
                }
            }
            swap(arr[i],arr[mini]);
        }
        int count=0;
        for(int i=0; i<arr.size(); i++){

                if(heights[i]!=arr[i]){
                    count++;
                }
        }
        return count;
    }
};