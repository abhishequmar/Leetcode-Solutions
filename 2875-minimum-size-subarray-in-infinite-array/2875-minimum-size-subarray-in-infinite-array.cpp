class Solution {
public:
    int minSizeSubarray(vector<int>& nms, int tgt) {
        vector<unsigned long int>nums;
        unsigned long int target =tgt;
        for(auto i:nms){
            unsigned long int tmp =i;
            nums.push_back(tmp);
        }
        if(target==0){
            return 0;
        }
        unsigned long int sum=0, res=0;
        for(auto i:nums){
            sum+=i;
        }
        if(sum<target){
            res+=( target/sum)*nums.size();
            target%=sum;
        }
        unsigned long int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        
        // map<unsigned long int,int>m;
        // int c=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]=i;
        //     if(m.find(nums[i]-target)!=m.end()){
        //         c=min(c, i-m[nums[i]-target]);
        //     }
        // }
        int c=INT_MAX;
        long long count=nums[0];
        int a=0, b=0;
        
        while(a<nums.size() && b<nums.size()){
            if(count<target){
                b++;
                if(b<nums.size()){
                    count+=nums[b];
                }
            }else if(count>target){
                count-=nums[a];
                a++;
            }else if(count==target){
                c=min(c,b-a+1);
                count-=nums[a];
                a++;
            }
        }
        if(c==INT_MAX && res!=0){
            return -1;
        }
        if(c!=INT_MAX){
            res+=c;
        }
        if(res==0){
            return -1;
        }
        return res;
    }
};