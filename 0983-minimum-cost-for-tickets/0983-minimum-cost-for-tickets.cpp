class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days[days.size()-1]+1, INT_MAX);
        map<int,int>m;
        for(auto i:days){
            dp[i]=-1;
        }
        dp[0]=0;
        
        for(int i=1;i<dp.size();i++){
            if(dp[i]==-1){
                
                
                dp[i]=dp[i-1]+costs[0];

                
                if(i>6){
                    dp[i]=min(dp[i], dp[i-7]+costs[1]);
                }else{
                    dp[i]=min(dp[i], costs[1]);
                }
                if(i>29){
                    dp[i]=min(dp[i], dp[i-30]+costs[2]);
                }else{
                    dp[i]=min(dp[i], costs[2]);
                }
            }else{
                dp[i]=dp[i-1];
            }
            }
        
        for(auto i:dp){
            cout<<i<<" ";
        }
        return dp[dp.size()-1];
    }
};