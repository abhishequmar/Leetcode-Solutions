class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        
        vector<int>prev{0}, cur, mmp(target+1);
       
        for(auto i:nums){
            vector<int>m(target+1, 0);
            vector<int>mp(target+1);
            for(auto j:prev){
                if(i+j <= target ){
                    if(m[i+j]==0){
                        cur.push_back(i+j);
                    }
                    m[i+j]++;
                    
                    mp[i+j]=max(mmp[j]+1, mmp[i+j]);
                }
                if(m[j]==0){
                    cur.push_back(j);
                    m[j]++;
                    mp[j]=max(mmp[j], mp[j]);
                }
                    
                
            }
            mmp=mp;
            prev=cur;
            cur={};
        }
        if(mmp[target]==0){
            return -1;
        }
        return mmp[target];
    }
};