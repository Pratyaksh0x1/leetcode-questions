class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int k=1;
       for(int right=1;right<nums.size();right++){
          if(nums[left]!=nums[right]){
            nums[left+1]=nums[right];
            left++;
            k+=1;
          }
       }
         return k;      
    }
};