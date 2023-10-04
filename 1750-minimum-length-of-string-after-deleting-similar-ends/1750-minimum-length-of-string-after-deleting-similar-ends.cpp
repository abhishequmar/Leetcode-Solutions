class Solution {
public:
    int minimumLength(string s) {
        string t="";
        t+=s[0];
        vector<string>v;
        for(int i=1;i<s.length();i++){
            if(s[i]==t[0]){
                t+=s[i];
            }else{
                v.push_back(t);
                t=s[i];
            }
        }
        v.push_back(t);
        int a=0,b=v.size()-1,res=s.length();
        for( auto i:v){
            cout<<i<<" ";
        }
        while(v[a][0]==v[b][0] && b>a){
            res-=(v[a].length()+v[b].length());
            a++;
            b--;
        }
        if(a==b ){
            if(v[a].length()>1){
                res=0;
            }else{
                res=1;
            }
            
        }
        // if(s.length()==1){
        //     return 1;
        // }
        return res;
    }
};