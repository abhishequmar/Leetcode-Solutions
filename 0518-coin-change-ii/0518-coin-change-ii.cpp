class Solution {
public:
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(), coins.end());
        vector<int>dp(amount+1, 0);
        dp[0]=1;
        for(int i=0;i<coins.size();i++){
            for(int j=0;j<=amount;j++){
                if(j-coins[i] >=0){
                    dp[j]+=dp[j-coins[i]];
                }
            }
        }
        for(auto i:dp){
            cout<<i<<" ";
        }
        return dp[amount];
    }
};