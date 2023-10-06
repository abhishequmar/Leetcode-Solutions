class Solution {
public:
    int minimumBuckets(string s) {
        if(s.length()==1 && s[0]=='.'){
            return 0;
        }
        if(s.length()==1 ){
            return -1;
        }
        
        int res=0;
        for(int i=1;i<s.length()-1;i++){
            if(s[i]=='.' && s[i-1]=='H' && s[i+1]=='H'){
                res++;
                s[i-1]='t';
                s[i+1]='t';
            }else if(s[i-1]=='H' && s[i]=='H' && s[i+1]=='H'){
                return -1;
            }
        }
        for(int i=1;i<s.length()-1;i++){
            if(s[i]=='H' && (s[i+1]=='.' || s[i-1]=='.')){
                res++;
                s[i]='t';
            }
        }
        if(s[0]=='H' && s[1]=='.'){
            res++;
            s[0]='t';
        }
        if(s[s.length()-1]=='H' && s[s.length()-2]=='.'){
            s[s.length()-1]='t';
            res++;
        }
        for( auto i:s){
            if(i=='H'){
                return -1;
            }
        }
        return res;
    }
};