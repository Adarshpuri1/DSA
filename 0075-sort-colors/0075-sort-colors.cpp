class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int mini=i;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[mini]>nums[j]){
                    mini=j;
                }
            }
            swap(nums[mini],nums[i]);
        }
    }
};