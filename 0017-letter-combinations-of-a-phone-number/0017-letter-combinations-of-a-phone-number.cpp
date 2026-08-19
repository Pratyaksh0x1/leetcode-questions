class Solution {
public:
string getString(int n){
    switch(n){
     case 2: return "abc";
     case 3: return "def";
     case 4: return "ghi";
     case 5: return "jkl";
     case 6: return "mno";
     case 7: return "pqrs";
     case 8: return "tuv";
     case 9: return "wxyz";
    }
    return "\0";
   } 
  void solve(string digits, string output, int i,
               vector<string>& ans) {

        if (i >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int num = digits[i] - '0';
        string value = getString(num);

        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);

            solve(digits, output, i + 1, ans);

            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
            vector<string> ans;

        if (digits.length() == 0) {
            return ans;
        }

        solve(digits, "", 0, ans);

        return ans;
    }
};