class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         for(int i=0;i<nums.size();i++){
             nums[i]%=2;
         }
         map<int,int>m;
         m[0]=1;
         int p=0, res=0;
         for(auto i:nums){
             p+=i;
             res+=m[p-k];
             m[p]++;
         }
         return res;
    }
};