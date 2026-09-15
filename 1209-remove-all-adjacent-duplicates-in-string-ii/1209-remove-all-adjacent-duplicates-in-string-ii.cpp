class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string r;
        
        for (int i = 0; i < s.length(); i++) {
            if (!st.empty() && st.top().first == s[i]) {
                if(st.top().second<k){
                    st.top().second+=1;
                } if(st.top().second==k){
                      st.pop();
                }
            } else {
                st.push({s[i],1});
            }
        }
        while (!st.empty()) {
            while(st.top().second>=1){
            r += st.top().first;
            st.top().second--;
            }
            st.pop();
        }

        reverse(r.begin(), r.end());
        return r;
    }
};