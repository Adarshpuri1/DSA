class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Maxcount=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count=count+1;
                Maxcount=max(Maxcount,count);
            }else{
                count=0;
            }
        }
        return Maxcount;
    }
};