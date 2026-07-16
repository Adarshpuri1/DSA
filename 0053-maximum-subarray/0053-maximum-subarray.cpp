class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int sum=nums[0];
      int ans=sum;
      for(int i=1; i<nums.size(); i++){
        if(sum<=0){
            sum=0;
        }
        sum=sum+nums[i];
        ans=max(sum,ans);
      }
      return ans;
    }
};