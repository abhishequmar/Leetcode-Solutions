class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum= (rolls.size()+n)*mean;
        for(auto i:rolls){
            sum-=i;
        }

        vector<int>v(n, 1);
        sum-=v.size();
        if(sum<0){
            return {};
        }
        int c=0;
        while(sum>0 && c<v.size()){
            if(sum<6){
                v[c]+=sum;
                sum=0;
                c++;

            }else{
                v[c]=6;
                sum-=5;
                c++;
            }
        }
        if(sum!=0){
            return {};
        }

        return v;
    }
};