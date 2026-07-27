class Solution {
public:
    int countKeyChanges(string s) {
        for (char &ch : s) 
            ch = tolower(ch);
        int count = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i - 1])
                count++;
        }
        return count;
    }
};