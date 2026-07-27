class Solution {
public:
void merge(vector<int>& nums,int low ,int mid,int high){
    vector<int> sunny;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if(nums[left]<=nums[right]){
            sunny.push_back(nums[left]);
            left++;
        }else{
            sunny.push_back(nums[right]);
            right++;
        }
        
    }
    while(left<=mid){
        sunny.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        sunny.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=sunny[i-low];
    }
}
void mergesort(vector<int>& nums,int low ,int high ){
       if(low >= high) return;
       int mid = low + (high - low) / 2;
       mergesort(nums,low,mid);
       mergesort(nums,mid+1,high);
       merge(nums,low ,mid,high);
}
    vector<int> sortArray(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        mergesort(nums,left,right);
        return nums;
    }

};