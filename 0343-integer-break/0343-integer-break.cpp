class Solution {
public:
    int integerBreak(int n) {
        vector<int>dp(6);
        dp[2]=1;
        dp[3]=2;
        dp[4]=4;
        dp[5]=6;
        if(n<=5){
            return dp[n];
        }
        
            if(n%3==0){
               return pow(3, n/3);
            }else if(n%3 ==1) {
                return pow(3, (n/3)-1)*4;
            }else  {
                return pow(3, n/3) *2;
            }
        
        return 0;

    }
};