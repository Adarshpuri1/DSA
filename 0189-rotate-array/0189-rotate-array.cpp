class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        vector<int>arr(len);

        for(int i=0; i<nums.size(); i++){
            arr[(i+k)%len]=nums[i];
        }
        for(int i=0; i<arr.size(); i++){
            nums[i]=arr[i];
        }
    }
};