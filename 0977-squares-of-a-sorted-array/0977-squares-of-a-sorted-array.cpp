class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i]=nums[i]*nums[i];
        }  
        int i=0;
        int j=nums.size()-1;
        vector<int> arr(nums.size());
        int k=nums.size()-1;
        while(i<=j){
            if(nums[i]<nums[j]){
                arr[k]=nums[j];
                j--;
            }else{
                arr[k]=nums[i];
                i++;
            }
            k--;
        }
        return arr;
    }
};