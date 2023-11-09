class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int>l=nums, r=nums;
        for(int i=1;i<nums.size();i++){
            l[i]=min(l[i], l[i-1]);
        }
        for(int i=nums.size()-2;i>=0;i--){
            r[i]=max(r[i], r[i+1]);
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<r[i+1] && nums[i]>l[i-1]){
                return true;
            }
        }
        return false;
    }
};