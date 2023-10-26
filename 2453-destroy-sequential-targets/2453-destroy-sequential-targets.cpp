class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        map<int,int>m;
        map<int,int>m2;
        int res=nums[0];
        int c=0;
        for(auto i:nums){
            m[i%space]++;
            if(m2.find(i%space)!=m2.end()){
                m2[i%space]=min(m2[i%space], i);
            }else{
                m2[i%space]= i;
            }
            
            if(c<m[i%space]){
                c=m[i%space];
                res=m2[i%space];
            }else if(c==m[i%space]){
                res=min(res, m2[i%space]);
            }
            
            
        }
        
        
        return res;
        
    }
};