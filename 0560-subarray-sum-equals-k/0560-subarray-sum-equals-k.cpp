class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
          int n = nums.size();
        int sum = 0;
        mp[0]=1;
        int res=0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int g=sum-k;
            int freq=mp[g];
            res+=freq;
            mp[sum]++;
        }
        return res;
    }
};