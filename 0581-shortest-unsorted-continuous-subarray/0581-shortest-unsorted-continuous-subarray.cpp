class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> cmp=nums;
        sort(cmp.begin(),cmp.end());
         int l = 0;
        int r = nums.size() - 1;

        while (l < nums.size() && nums[l] == cmp[l]) {
            l++;
        }
        if (l == nums.size())
             return 0;

        while (r >= 0 && nums[r] == cmp[r]) {
            r--;
        }

        return r - l + 1;
    }
};