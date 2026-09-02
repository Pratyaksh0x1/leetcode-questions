class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int water=0;
        int leftmax=INT_MIN;
            int rightmax=INT_MIN;
        while(left<right){
            leftmax=max(leftmax,height[left]);
            rightmax=max(rightmax,height[right]);
            if(leftmax>rightmax){
                water += min(leftmax, rightmax) - height[right];
                right--;
            }else{
                
                 water += min(leftmax, rightmax) - height[left];
                 left++;
            }

        }
        return water;
    }
};