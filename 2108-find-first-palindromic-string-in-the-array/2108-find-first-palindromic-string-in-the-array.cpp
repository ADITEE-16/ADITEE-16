class Solution {
public:
    bool palindrome(string s){
        string m=s;
        reverse(s.begin(),s.end());
        return m==s;
    }
    string firstPalindrome(vector<string>& words) {
        for(string ch: words){
            if (palindrome(ch))
                return ch;
        }
        return "";
    }
};