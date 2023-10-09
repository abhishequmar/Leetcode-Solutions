class Solution {
public:
    bool canArrange(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=(k-(abs(nums[i])%k));
                if(abs(nums[i])%k ==0){
                    nums[i]=0;
                }
                m[nums[i]]++;
            }else{
                nums[i]%=k;
                m[nums[i]]++;
            }
            
        }
        for(auto i:nums){
            cout<<i<<" ";
        }
        for(auto i:m){
            if(i.first !=0 && m[k-i.first]==i.second){

            }else if(i.first ==0 && i.second%2==0){

            }else{
                return false;
            }
        }
        return true;
        
    }
};