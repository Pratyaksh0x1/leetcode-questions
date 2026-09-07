class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
          int n = nums.size();
           int left=0;

        for (int i = 0; i < n; i++) {
            left = left + nums[i];
            nums[i]=left;
        }
        return nums;
    }
};