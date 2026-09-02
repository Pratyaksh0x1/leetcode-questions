class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;

        for (char c : t) {
            mp[c]++;
        }

        int start = 0;
        int minLen = INT_MAX;
        int minStart = 0;
        int required = t.size();

        for (int end = 0; end < s.size(); end++) {
 
            if (mp[s[end]] > 0) {
                required--;
            }

            mp[s[end]]--;

            while (required == 0) {

                if (end - start + 1 < minLen) {
                    minLen = end - start + 1;
                    minStart = start;
                }

                mp[s[start]]++;

                if (mp[s[start]] > 0) {
                    required++;
                }

                start++;
            }
        }
            if (minLen == INT_MAX) {
                return "";
            }

            return s.substr(minStart, minLen);
        
    }
};