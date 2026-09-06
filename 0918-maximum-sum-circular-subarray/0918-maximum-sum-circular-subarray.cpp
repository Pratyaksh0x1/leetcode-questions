class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int be=nums[0];
        int ans=nums[0];
        int me=nums[0];
        int mins=nums[0];
        int ttl=nums[0];
        for(int i=1;i<nums.size();i++){
            ttl+=nums[i];
            int v1=be+nums[i];
            int v2=nums[i];
            int v3=me+nums[i];
            int v4=nums[i];
            me=min(v3,v4);
            mins=min(mins,me);
            be=max(v1,v2);
            ans=max(ans,be);
        }
          if (ans < 0)
            return ans;
        else{
        return max(ans, ttl - mins);}
    }
};