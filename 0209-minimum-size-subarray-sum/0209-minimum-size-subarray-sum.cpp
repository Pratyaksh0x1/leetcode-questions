class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
         int sum=0;
         int len=INT_MAX;
        for(int r=0;r<nums.size();r++){
              sum+=nums[r];
              while(sum>=target){
                sum-=nums[start];
                len=min(len,r-start+1);
                start++;
              }
              
        }
        if(len==INT_MAX){
            return 0;
        }else{

        return len;}
    }
};