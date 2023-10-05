class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int x=0, y=0;
        for(auto i:s1){
            if(i=='x'){
                x++;
            }else{
                y++;
            }
        }
        for(auto i:s2){
            if(i=='x'){
                x++;
            }else{
                y++;
            }
        }
        if(x%2==1 || y%2==1){
            return -1;
        }
        if(s1==s2){
            return 0;
        }
        int res=0;
        string t1="", t2="";
        map<string, int>m;
        for(int i=0;i<s1.length();i++){
            string t="";
            if(s1[i]!=s2[i]){
                t+=s1[i];
                t+=s2[i];
                m[t]++;
            }
            
           // cout<<t<<" ";
        }
        for(auto i:m){
            cout<<i.first<< " "<<i.second<<endl;
            if(i.second%2==0){
                res+= i.second/2;
            }else{
                res++;
                res+=i.second/2;
            }
        }
        return res;        
    }
};