class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        map<int, priority_queue <int, vector<int>, greater<int>> >m;
        vector<int>t=nums;
        sort(t.begin(), t.end());
        for(int i=0;i<t.size();i++){
            m[t[i]].push(i);
        }
        
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            
           // nums[i]=m[nums[i]].top();
           v.push_back(m[nums[i]].top());
            m[nums[i]].pop();  
        }
        int c=0;
        int res=0;
        for(int i=0;i<v.size();i++){
            c=max(c,  v[i]);
            if(i==c){
                res++;
            }
        }
        
        return res;
        
    }
};