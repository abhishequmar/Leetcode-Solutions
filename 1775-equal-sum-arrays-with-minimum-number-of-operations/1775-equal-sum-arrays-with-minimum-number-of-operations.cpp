class Solution {
public:
    int minOperations(vector<int>& a, vector<int>& b) {
       
        int ca=0, cb=0;
        for(auto i:a){
            ca+=i;
        }
        for(auto i:b){
            cb+=i;
        }
        

        if(ca>cb){
            swap(a, b);
            swap(ca,cb);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int res=0;
        int c=cb-ca;
        int i=0, j=0;
        if(c==0){
            return 0;
        }
        while(i<a.size() || j<b.size()){
            if(i<a.size() && j<b.size()){
                if(6-a[i] > (b[j]-1)){
                    c-=(6-a[i]);
                    res++;
                    i++;
                }else{
                    c-=(b[j]-1);
                    res++;
                    j++;
                }
            }else if(i<a.size()){
                c-=(6-a[i]);
                    res++;
                    i++;
            }else if(j<b.size()){
                c-=(b[j]-1);
                    res++;
                    j++;
            }
            if(c<=0){
                return res;
            }
        }
        
        return -1;

    }
};