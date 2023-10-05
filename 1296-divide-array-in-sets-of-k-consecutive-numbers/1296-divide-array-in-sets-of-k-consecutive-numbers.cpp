class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int n) {
        if(nums.size()%n !=0){
            return false;
        }
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            for(int k=i.second;k>0;k--){
                for(int j=i.first;j<i.first+n;j++){
                    cout<<j<<" ";
                    m[j]--;
                    if(m[j]<0){
                        return false;
                    }
                }
                cout<<endl;
            }
        }
        return true;
    }
};