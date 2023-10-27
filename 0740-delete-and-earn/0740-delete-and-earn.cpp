class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int>m;
        vector<int>v, v2;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            v.push_back(i.first);
        }
        int res=v[0]*m[v[0]];
        sort(v.begin(), v.end());
        vector<int>dp(v.size());
        vector<int>mx(v.size());
        dp[0]=v[0]*m[v[0]];
        mx[0]=dp[0];
        for(int i=1;i<dp.size();i++){
            dp[i]=dp[i]=v[i]*m[v[i]];
            int t=0;
            if(v[i-1]+1 != v[i]){
                t=mx[i-1];
            }else{
                if(i>1){
                t=max(t, mx[i-2]);
            }
            if(i>2){
                t=max(t, mx[i-3]);
            }
            }
            
            dp[i]+=t;
            res=max(res, dp[i]);
            mx[i]=max(dp[i], mx[i-1]);

        }
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:dp){
            cout<<i<<" ";
        }
        return res;
    }
};