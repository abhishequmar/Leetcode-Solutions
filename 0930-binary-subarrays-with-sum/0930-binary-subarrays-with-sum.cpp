class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res=0;
        map<int,int>m;
        m[0]=1;
        m[nums[0]]++;
        if(nums[0]==goal){
            res++;
        }
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
            res+=m[nums[i]-goal];
            m[nums[i]]++;
            
        }
        for(auto i:nums){
            cout<<i<<" ";
        }
        return res;
    }
};