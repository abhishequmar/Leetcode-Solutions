class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int c=0;
        for(auto i:m){
            c=max(c, i.second);
        }
        if(c<=nums.size()/2){
            return nums.size()%2;
        }
        return c-(nums.size()-c);
    }
};