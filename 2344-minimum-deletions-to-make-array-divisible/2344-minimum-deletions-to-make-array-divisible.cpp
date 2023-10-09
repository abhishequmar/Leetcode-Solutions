class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& v) {
        int t=v[0];
        for(int i=1;i<v.size();i++){
            t=gcd(t, v[i]);
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(t%nums[i]==0){
                return i;
            }
        }
        return -1;
    }
};