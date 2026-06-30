class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for (char c : s) {
            if (isalnum(c)) {
                ans += c;
            }
        }
        for (int i = 0; i < ans.length(); i++) {
            ans[i] = tolower(ans[i]);
        }
        string rev = ans;
            reverse(rev.begin(), rev.end());

        if (ans == rev) {
            return true;
        }
        return false;
    }
};