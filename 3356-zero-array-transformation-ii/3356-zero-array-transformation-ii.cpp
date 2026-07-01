class Solution {
public:
bool canMakeZero(int k, vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);
        for(int i = 0; i < k; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            int val = queries[i][2];
            diff[l] += val;
            if(r + 1 < n)
                diff[r + 1] -= val;
        }
        int prefix = 0;
        for(int i = 0; i < n; i++) {
            prefix += diff[i];
            if(prefix < nums[i])
                return false;
        }

        return true;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int m = queries.size();
        if(!canMakeZero(m, nums, queries))
            return -1;
        int low = 0, high = m;
        int ans = m;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(canMakeZero(mid, nums, queries)) {
                ans = mid;
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }
        return ans;
    }
};