class Solution {
public:
  string process(string s) {
        string result = "";

        for (char ch : s) {
            if (ch != '#') {
                result += ch;
            }
            else if (!result.empty()) {
                result.pop_back();
            }
        }
        return result;
  }

    bool backspaceCompare(string s, string t) {
        return process(s)==process(t);
    }
};