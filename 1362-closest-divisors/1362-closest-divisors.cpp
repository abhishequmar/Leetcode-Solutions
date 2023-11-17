class Solution {
public:
    vector<int>fun(int n){
       
        int a=sqrt(n);

        for(int i=a;i>=1;i--){
            if(n%i ==0){
                return {i, n/i};
            }
        }
        return {};
    }
    vector<int> closestDivisors(int n) {
         if(n==1){
            return {1,2};
        }
        vector<int> res1=fun(n+1), res2=fun(n+2);
        cout<<res1[0]<<" "<<res1[1]<<endl<<res2[0]<<" "<<res2[1]<<endl;
        if(abs(res1[0]-res1[1]) < abs(res2[0]-res2[1])){
            return res1;
        }
        
        return res2;

        
    }
};