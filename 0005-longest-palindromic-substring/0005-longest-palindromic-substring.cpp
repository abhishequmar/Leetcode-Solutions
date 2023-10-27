class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int res2=0;
        res+=s[0];
        for(int i=1;i<=s.length()-1;i++){
            cout<<"hi"<<endl;
            int a=i-1, b=i+1, c1=1, c2=0, c3=0;
            string t1,t2,t3;
            while( a>=0 && b<s.length() && s[a]==s[b] ){
                a--;
                b++;
                c1+=2;
            }
            t1=s.substr(a+1, c1);
            cout<<i<<endl;
            if(s[i-1]==s[i] && i>=1){
                a=i-2;
                b=i+1;
                c2=2;
                while(  a>=0 && b<s.length() && s[a]==s[b]){
                a--;
                b++;
                c2+=2;
                }
                t2=s.substr(a+1, c2);
                cout<<"hello"<<endl;
            }else if( i<=s.length()-2 && s[i]==s[i+1] ){
                a=i-1;
                b=i+2;
                c3=2;
                while( a>=0 && b<s.length() && s[a]==s[b] ){
                a--;
                b++;
                c3+=2;
            }
            t3=s.substr(a+1, c3);
            }
            //res=max({c1,c2,c3});
            if(c1>c2 && c1>c3 && c1>res.length()){
                res=t1;
            }else if(c2>c1 && c2>c3 && c2>res.length()){
                res=t2;
            }else if(c3>c2 && c3>c1 && c3>res.length()){
                res=t3;
            }
            res2=max({c1,c2,c3});
        }
            cout<<s.substr(0,2);
        return res;
    }
};