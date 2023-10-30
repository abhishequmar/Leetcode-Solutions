class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>>v;
        for(auto i:arr){
            int t=i;
            int c=0;
            while(t){
                c+= t&1;
                t>>=1;
            }
            v.push_back({c, i});
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size();i++){
            arr[i]=v[i][1];
        }
        return arr;
        
    }
};