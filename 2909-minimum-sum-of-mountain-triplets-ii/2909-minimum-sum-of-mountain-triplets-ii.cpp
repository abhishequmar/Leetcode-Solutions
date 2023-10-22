class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int>l=nums;
        vector<int>r=nums;
        for(int i=1;i<nums.size();i++){
            l[i]=min(l[i], l[i-1]);
        }
        for(int i=nums.size()-2;i>=0;i--){
            r[i]=min(r[i], r[i+1]);
        }
        int res=INT_MAX;
        int f=0;
        for(int i=1;i<nums.size()-1;i++){
            if(l[i-1]<nums[i] && r[i+1]<nums[i]){
                f=1;
                res=min(res, nums[i]+l[i-1]+r[i+1]);
            }
        }
        if(f==0){
            return -1;
        }
        return res;
        
    }
};