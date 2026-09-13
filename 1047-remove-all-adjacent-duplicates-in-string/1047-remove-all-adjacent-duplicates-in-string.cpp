class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string r;
        for (int i = 0; i < s.length(); i++) {
            if (!st.empty() && st.top() == s[i]) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        while (!st.empty()) {
            r += st.top();
            st.pop();
        }

        reverse(r.begin(), r.end());
        return r;
    }
};