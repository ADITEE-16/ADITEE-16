class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        int maxFreq = 0;
        int ans = 0;
        for(auto it : mpp){
            if(it.second>maxFreq){
                maxFreq = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};