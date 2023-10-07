class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        long long a=0,b=nums.size()-1, c=0, res=1;
        for(auto i:nums){
            if(i==1){
                break;
            }else{
                a++;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==0){
                b--;
            }else{
                break;
            }
        }
        cout<<a<<" "<<b;
        for(int i=a+1;i<=b;i++){
            if(nums[i]==0){
                c++;
            }else{
                res*=(((c%1000000007)+1)%1000000007);
                res%=1000000007;
                c=0;

            }
        }
        if(b==-1){
            res=0;
        }
        return int(res);
    }
};