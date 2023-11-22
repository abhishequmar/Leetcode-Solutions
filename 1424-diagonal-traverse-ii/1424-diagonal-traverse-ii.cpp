class Solution {
public:
    struct comp{
      bool operator()(pair<int,int>& x,pair<int,int>& y){
          if(x.first+x.second == y.first +y.second)
              return x.first<y.first;
          return x.first+x.second > y.first +y.second;
      }  
    };
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int m=nums[i].size();
            for(int j=0;j<m;j++)
            {
                pq.push({i,j});
            }
        }
        while(!pq.empty())
        {
            ans.push_back(nums[pq.top().first][pq.top().second]);
            pq.pop();
        }
        return ans;
    }
};