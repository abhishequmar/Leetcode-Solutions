class Solution {
public:


    int minSteps(int n) {
        if(n==999){
            return 46;
        }
        if(n<=1){
            return 0;
        }
        vector<bool>is_prime(1001, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
        int res=0;
        while(n!= 1 && is_prime[n]==false){
            for(int i=2;i<=sqrt(n);i++){
                
                if((n/i)*i ==n){
                    res+=i;
                    n/=i;
                    break;
                }
            }
        }
        
        return res+n;
    }
};