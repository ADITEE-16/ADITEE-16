class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        int digitsum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
            int temp = nums[i];
            while (temp > 0) {
                digitsum += temp % 10;
                temp /= 10;
            }
        }
        int ans=abs(elesum-digitsum);
        return ans;
    }
};