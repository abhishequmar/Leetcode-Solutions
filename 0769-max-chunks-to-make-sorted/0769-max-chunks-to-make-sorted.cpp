class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int c=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            c=max(c,  nums[i]);
            if(i==c){
                res++;
            }
        }
        return res;
    }
};