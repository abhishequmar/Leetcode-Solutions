class Solution {
public:
    int minCost(string s, vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>t;
        t.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s[i]!=s[i-1]){
                v.push_back(t);
                t={nums[i]};
            }else{
                t.push_back(nums[i]);
            }
        }
        v.push_back(t);
        int res=0;
        for(auto i:v){
           if(i.size()>1){
               int tmp=0;
                int mn=INT_MIN;
                for(auto j:i){
                    cout<<j<<" ";
                    tmp+=j;
                    mn=max(mn, j);
                }
                cout<<endl;
                res+=(tmp-mn);
            }
        }

        return res;
    }
};