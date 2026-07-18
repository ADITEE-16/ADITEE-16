class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i;
        int k=0;
        vector<int> ans;
        for(i=0;i<n;i++){
            if(nums[i]==val){
                continue;
            }
            else{
                ans.push_back(nums[i]);
                k++;
            }
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return k;
    }
};