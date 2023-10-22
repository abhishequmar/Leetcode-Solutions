class Solution {
public:
    bool wordPattern(string pattern, string s) {
        bool r=true;

        
        int a=0;
        s+=' ';
        char t='a';
        string st="";
        char t2 ='a';
        string ptn="";
        map<char,char>m2;
        map<string,char>m;

        for(int i=0;i<pattern.length();i++){
            if(m2.find(pattern[i])==m2.end()){
                m2[pattern[i]]=t2;
                ptn+=t2;
                t2++;
            }else{
                ptn+=m2[pattern[i]];

            }
        }

        


        for(int i=0;i<s.length();i++){
            
            if(s[i]==' '){
                
                
                if(m.find(s.substr(a,i-a))==m.end()){
                    m[s.substr(a,i-a)]=t;
                    st+=t;
                    t++;
                    
                }else{
                    st+=m[s.substr(a,i-a)];
                }
                a=i+1;

            }
        }
        
    cout<<ptn<<endl;

       return st==ptn;



        
    }
};