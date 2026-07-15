class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s=nums.size();
        vector<int> arr(s);
        
        for(int i=0; i<s; i++){
            arr[(i+k)%s]=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]=arr[i];
        }
    }
};