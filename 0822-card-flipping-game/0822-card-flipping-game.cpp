class Solution {
public:
    int flipgame(vector<int>& f, vector<int>& b) {
        
        int res=INT_MAX;
        map<int,int>m;
        for(int i=0;i<f.size();i++){
            if(f[i]==b[i]){
               m[f[i]]=1;
            }
        }
        for(int i=0;i<f.size();i++){
            if(f[i]!=b[i] && m[f[i]]==0){
               res=min(res, f[i]);
            }
            if(f[i]!=b[i] && m[b[i]]==0){
               res=min(res, b[i]);
            }
        }
       if(res==INT_MAX){
           return 0;
       }
       return res;
    }
};