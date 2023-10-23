class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int c=1, res=1;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-1 ==nums[i-1]){
                c++;
                res=max(res, c);
            }else if(nums[i]==nums[i-1]){
                
            }
            else{
                c=1;
            }
        }
        return res;
    }
};