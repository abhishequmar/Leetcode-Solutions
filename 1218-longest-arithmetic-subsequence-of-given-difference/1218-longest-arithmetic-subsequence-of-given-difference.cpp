class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        map<int,int>m;
        vector<int>dp(arr.size());
        int res=1;
        m[arr[0]]=0;
        dp[0]=1;
        for(int i=1;i<dp.size();i++){
            if(m.find(arr[i]-d)!=m.end()){
                dp[i]=dp[m[arr[i]-d]]+1;
                res=max(res, dp[i]);
                m[arr[i]]=i;
            }else{
                dp[i]=1;
                m[arr[i]]=i;
            }
        }
        return res;
    }
};