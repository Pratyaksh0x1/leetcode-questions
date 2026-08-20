class Solution {
public:
    int longestDecomposition(string text) {
             int res = 0, n = text.length();
        string l = "", r = "";
        for (int i = 0; i < n; ++i) {
            l = l + text[i], r = text[n - i - 1] + r;
            if (l == r)
                ++res, l = "", r = "";
        }
        return res;
        
    }
};