class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.length();
       if (s1.length() > s2.length()) {
            return false;
        }

      unordered_map<char, int> mp1;
      unordered_map<char, int> mp2;

        for (int i = 0; i < k; i++) {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        if (mp1 == mp2) {
            return true;
        }

        for (int h = k; h < s2.length(); h++) {
         mp2[s2[h - k]]--;
         if (mp2[s2[h - k]] == 0) {
                mp2.erase(s2[h - k]);
            }
         mp2[s2[h]]++;

            if (mp1 == mp2) {
                return true;
            }
        }

        return false;

    }
};