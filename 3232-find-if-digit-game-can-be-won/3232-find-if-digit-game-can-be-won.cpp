class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ssum=0;
        int dsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10)
                dsum+=nums[i];
            else
                ssum+=nums[i];
        }
        if(dsum>ssum || ssum>dsum)
           return true;
        return false;
    }
};