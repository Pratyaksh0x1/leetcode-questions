class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int zero=0;
        int one=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){one++;}
            else {zero++;}
            int diff=one-zero;
            if(diff==0){
                res=max(res,i+1);
                continue;
            }
            if(mp.find(diff)==mp.end()){
               mp[diff]=i;                
            }else{
              
                int len=i-mp[diff];
                res=max(len,res);
            }
            
        }
        return res;
    }
};