class Solution {
public:
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool> prev(k + 1, false);

    prev[0] = true;

    if (arr[0] <= k) {
        prev[arr[0]] = true;
    }

    for (int ind = 1; ind < n; ind++) {
        vector<bool> cur(k + 1, false);
        cur[0] = true;
        for (int target = 1; target <= k; target++) {
            bool notTaken = prev[target];
            bool taken = false;
            if (arr[ind] <= target) {
                taken = prev[target - arr[ind]];
            }
            cur[target] = notTaken || taken;
        }
        prev = cur;
    }
    return prev[k];
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums){
            sum+=i;
        } if(sum%2==1){
            return false;
        }
        return subsetSumToK(nums.size(), sum/2, nums);
       
    }
};