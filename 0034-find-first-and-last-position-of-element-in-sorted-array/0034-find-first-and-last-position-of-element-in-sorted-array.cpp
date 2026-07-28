class Solution {
public:
    int lowerbound(vector<int> &nums,int target){
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>=target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
     int upperbound(vector<int> &nums,int target){
          int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start-1;
     }

   
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=lowerbound(nums,target);
        if (n == nums.size() || nums[n] != target)
        return {-1, -1};
        int m=upperbound(nums,target);   
        return {n,m};
    }
};