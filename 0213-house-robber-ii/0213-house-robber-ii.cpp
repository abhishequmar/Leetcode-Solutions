class Solution {
public:
int rob1(vector<int>& nums) {
        
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>dp(nums.size());
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        for(auto i:dp){
            cout<<i<<" ";
        }
        return max(dp[dp.size()-1], dp[dp.size()-2]);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>v;
        for(int i=1;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        nums.pop_back();
        return max(rob1(v), rob1(nums));
        
    }
};