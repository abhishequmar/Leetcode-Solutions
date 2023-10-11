class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int,int>m;
        vector<int>res=people;
        sort(people.begin(), people.end());
        people.erase( unique( people.begin(), people.end() ), people.end() );
        for(auto i:people){
            cout<<i<<" ";
        }
        cout<<endl;
        vector<int>v(people.size()+1);
        for(auto i:flowers){
            
            auto ind1=lower_bound(people.begin(), people.end(), i[0]);
            auto ind2=lower_bound(people.begin(), people.end(), i[1]);
            if(binary_search(people.begin(), people.end(), i[1])){
                ind2++;
            }
            
            
            
            int start=ind1-people.begin(), end=ind2-people.begin();
            v[start]++;
            v[end]--;
            
            
            
        
        
        }
        
        for(int i=1;i<v.size();i++){
            v[i]+=v[i-1];
        }
        
        for(int i=0;i<people.size();i++){
            m[people[i]]=v[i];
        }
        for(int i=0;i<res.size();i++){
            res[i]=m[res[i]];
        }
        return res;
    }
};