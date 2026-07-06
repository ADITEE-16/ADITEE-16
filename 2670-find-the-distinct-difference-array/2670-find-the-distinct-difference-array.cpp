class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        set<int> st;
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
       // suffix[nums.size()]=0;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
            prefix[i]=st.size();
        }
        st.clear();
        for(int i=nums.size()-1; i>=0; i--){
            st.insert(nums[i]);
            suffix[i]=st.size();
        }
        for(int i = 0; i < nums.size(); i++) {
            if(i == nums.size() - 1)
                ans[i] = prefix[i];   // right side empty → 0
            else
                ans[i] = prefix[i] - suffix[i + 1];
        }
        
        return ans;
    }
};