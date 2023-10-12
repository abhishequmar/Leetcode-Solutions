class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        map<int, int>m;
        for(auto i:coins){
            m[i]++;
        }
        sort(coins.begin(), coins.end());
        vector<int>dp(amount+1, INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto j:coins){
                if(i-j >=0 && dp[i-j] != INT_MAX){
                    dp[i]=min({dp[i-j]+1,dp[i] });
                }else if(i-j < 0){
                    break;
                }
                

            }
        }
        if(dp[amount]==INT_MAX){
            return -1;
        }
        return dp[amount];

    }
};