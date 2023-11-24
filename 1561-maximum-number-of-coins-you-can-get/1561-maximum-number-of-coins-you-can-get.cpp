class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int r=0;
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        int n=piles.size()/3;
        for(int i=1;i< 2*n;i+=2){
            r+=piles[i];
        }
        return r;
    }
};