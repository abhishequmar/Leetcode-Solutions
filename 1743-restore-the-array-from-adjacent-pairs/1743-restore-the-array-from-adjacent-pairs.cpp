class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& p) {
        set<int>t;
        map<int,vector<int>>m;
       
        for(auto i:p){
            t.insert(i[0]);
            t.insert(i[1]);
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        vector<int>v(t.size());
        
        for(auto i:m){
             if(i.second.size()==1){
                 
                 v[0]=i.first;
                 v[1]=i.second[0];
                 break;
             }
        }
        for(int i=2;i<v.size();i++){
            int a=m[v[i-1]][0];
            int b=m[v[i-1]][1];
            
            if(a!=v[i-2]  ){
                v[i]=a;
            }else{
                v[i]=b;
            }
        }
        
        return v;
        
    }
};
