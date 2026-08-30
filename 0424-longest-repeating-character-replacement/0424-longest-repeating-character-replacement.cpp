class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int low=0;
        int maxi=INT_MIN;
        int count=0;
        for(int right=0;right<s.length();right++){
              freq[s[right]-'A']++;
              count=max(count,freq[s[right]-'A']);
               while((right - low + 1) - count >k){
                    freq[s[low]-'A']--;

                    
                    low++;

               }
               maxi = max(maxi, right-low+1);
        }
        return maxi;
    }
};