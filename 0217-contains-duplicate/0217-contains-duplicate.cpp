class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        // unordered_set<int> st;
        // for(int x : nums){
        //     if(st.find(x)!=st.end()){
        //         return true;
        //     }
        //     else{
        //         st.insert(x);
        //     }
        // }
        // return false;
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto it: mpp){
            if(it.second!=1){
                return true;
                break;
            }
            else{
                continue;
            }
        }
        return false;
    }
};