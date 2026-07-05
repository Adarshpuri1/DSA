class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      int ans=nums[0]+nums[1]+nums[2];
      for(int i=0; i<nums.size(); i++){
        int idx1=i+1;
        int idx2=nums.size()-1;
        while(idx1<idx2){
            int sum=nums[i]+nums[idx1]+nums[idx2];
            if(abs(sum-target)<abs(ans-target)){
                ans=sum;
            }
            if(sum>target){
                idx2--;
            }
            else{
                idx1++;
            }
        }
      }
      return ans;
    }
};