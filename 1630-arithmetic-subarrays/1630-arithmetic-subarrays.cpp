class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) { 
        vector<bool>res;
        for(int i=0;i<l.size();i++){
            vector<int>t;
            for(int j=l[i];j<=r[i];j++){
                t.push_back(nums[j]);
            }
            sort(t.begin(), t.end());
            int f=1;
            for(int j=2;j<t.size();j++){
                if(t[j]-t[j-1] != t[1]-t[0]){
                    f=0;
                    break;
                }
            }
            res.push_back(f);
        }
        return res;
    }
};