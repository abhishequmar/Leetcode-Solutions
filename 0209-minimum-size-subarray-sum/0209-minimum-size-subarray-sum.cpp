class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        if(nums[nums.size()-1]<target){
            return 0;
        }
        int a=0,b=0,c=nums[0], res=INT_MAX;
        while(a<nums.size() || b<nums.size()){
            if(b==nums.size() && c<target){
                break;
            }
            if(c<target){
                b++;
                if(b<nums.size()){
                    c=nums[b];
                }
                if(a>0){
                    c-=nums[a-1];
                }
            }else{
                res=min(res, b-a+1);
                a++;
                if(b<nums.size()){
                    c=nums[b];
                }
                if(a>0){
                    c-=nums[a-1];
                }
            }
        }
        
        return res;
    }
};