class Solution {
public:
    string toLowerCase(string s) {
        string m="";
        for(char ch : s){
            m+=tolower(ch);
        }
        return m;
    }
};