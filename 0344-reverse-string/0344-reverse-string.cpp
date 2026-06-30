class Solution {
public:
    void reverseString(vector<char>& s) {
        int arr[s.size()];
        reverse(s.begin(), s.end());
        for(int i=0;i!='\0';i++){
            arr[i]=s[i];
        }
    }
};