class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();
        vector<int>ans;
       if (p.length() > s.length()) {
            return {};
        }

      unordered_map<char, int> mp1;
      unordered_map<char, int> mp2;

        for (int i = 0; i < k; i++) {
            mp1[p[i]]++;
            mp2[s[i]]++;
        }
        if (mp1 == mp2) {
            ans.push_back(0);
        }

        for (int h = k; h < s.length(); h++) {
         mp2[s[h - k]]--;
         if (mp2[s[h - k]] == 0) {
                mp2.erase(s[h - k]);
            }
         mp2[s[h]]++;

            if (mp1 == mp2) {
                ans.push_back(h-k+1);
            }
        }

        return ans;
    }
};