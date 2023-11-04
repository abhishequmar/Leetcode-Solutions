class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        for(int i=0;i<right.size();i++){
            right[i]=(n-right[i]);
        }
        int res=0;
        
        for(auto i:left){
            res=max(i, res);
        }
        for(auto i:right){
            res=max(i, res);
        }
        return res;
    }
};