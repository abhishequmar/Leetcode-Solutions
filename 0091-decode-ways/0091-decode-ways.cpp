class Solution {
public:

    int numDecodings(string s) {
        if(s[0]=='0'){
            return 0;
        }
        vector<int>dp(s.length());
        dp[0]=1;
        for(int i=1;i<s.length();i++){
            int t=stoi(s.substr(i-1, 2));
            if(t<27 && t>0){
                if(t==10 || t==20){
                    if(i==1){
                        dp[i]=1;
                    }else{
                        dp[i]=dp[i-2];
                        dp[i-1]=dp[i-2];
                    }
                }else{
                    if(t<10){
                        if(i<=2){
                        dp[i]=1;
                    }else{
                        dp[i]=dp[i-2];
                    }
                    }else{
                        if(i>1){
                            dp[i]=dp[i-1]+dp[i-2];
                        }else{
                            dp[i]=dp[i-1]+1;
                        }
                        
                    }
                    
                }

            }else if(t>26 && s[i]!='0'){
                if(i==1){
                        dp[i]=1;
                    }else{
                        dp[i]=dp[i-1];
                    }
            }
            else{
                return 0;
            }
            
        }
        for(auto i:dp){
            cout<<i<<" ";
        }
        return dp[dp.size()-1];
        
    }
};