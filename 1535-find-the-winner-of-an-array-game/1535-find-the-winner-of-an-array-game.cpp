class Solution {
public:

    int getWinner(vector<int>& arr, int k) {
        int r=arr[0];
        int c=0;
        map<int,int>m;
        if(k< arr.size()){
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > r) {
                r = arr[i];
                c = 0;
            }
            if (++c == k) break;
        }

        }else{
            for(auto i:arr){
                r=max(r,i);
            }
        }
        return r;
    }
};