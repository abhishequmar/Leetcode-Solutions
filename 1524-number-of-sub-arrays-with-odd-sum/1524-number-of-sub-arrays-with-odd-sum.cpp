class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]%=2;
        }
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]%=2;
        }
        long long p0=1,p1=0, res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                p0++;
                res+=p1;
            }else{
                p1++;
                res+=p0;
                res%=1000000007;
            }
        }
        return int(res);
    }
};