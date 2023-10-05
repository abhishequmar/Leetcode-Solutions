class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=0,b=1, res=0;
        while(a<nums.size() && b<nums.size()){
            if(nums[b]>nums[a]){
                res++;
                a++;
                b++;
            }else{
                b++;
            }
        }
        return res;
    }
};