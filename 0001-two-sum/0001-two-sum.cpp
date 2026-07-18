class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        int n=nums.size();
        // int i,j;
        // for(i=0;i<n;i++){
        //     for(j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(min(i,j));
        //             ans.push_back(max(i,j));
        //             return ans;
        //         }
        //     }
        // }
        // return ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int need=target-nums[i];
            if(mpp.find(need)!=mpp.end()){
                return {mpp[need], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};