class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0;
        int right=0;
        bool ans=false;
        while(right<t.length()&&left<s.length()){
            if(s[left]==t[right]){
                left++;
                right++;
                
            }else{
                right++;
            }
        }
        return (left==s.length());
    }
};