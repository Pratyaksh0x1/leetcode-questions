class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int div=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int g=sum%k;
            if(g<0){
                g+=k;
            }
            int freq=mp[g];
            res+=freq;
            mp[g]++;
        }
        return res;
    }
};