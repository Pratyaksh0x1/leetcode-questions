class Solution {
public:
    int longestSubstring(string s, int k) {
        
        unordered_map<char,int> mp;
        for(int high=0;high<s.length();high++){
            mp[s[high]]++;
        }
        for(int low=0;low<s.length();low++){
            if(mp[s[low]]<k){
                int left=longestSubstring(s.substr(0,low),  k);
                int right=longestSubstring(s.substr(low+1),  k);
                return max(left,right);
            }
        }
        return s.size();
    }
};