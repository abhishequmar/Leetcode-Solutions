class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>v=nums;
        for(int i=1;i<v.size();i++){
            v[i]+=v[i-1];
        }
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int t=0;
            t+= ((nums[i]*(i+1))-v[i]);
            t+= ((v[v.size()-1]-v[i])-(nums[i]*(v.size()-i-1)));
            res.push_back(t);
        }

        return res;
    }
};