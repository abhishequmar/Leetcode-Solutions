class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.length(),0);
        map<string, int>m;
        for(auto i : wordDict){
            m[i]++;
        }
        vector<int>v;
        string t="";
        for(int i=0;i<s.length();i++){
            t+=s[i];
            if(m[t]>0){
                v.push_back(i);
                dp[i]=1;
            }
        }
       if(v.size()==0){
           return false;
       }
        for(int i=v[0]+1;i<dp.size();i++){
            for(int j=v.size()-1;j>=0;j--){
                string str=s.substr(v[j]+1, i-v[j]);
                if(m[str]>0){
                    dp[i]=1;
                    v.push_back(i);
                    break;
                }
            }
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        return dp[dp.size()-1];
    }
};