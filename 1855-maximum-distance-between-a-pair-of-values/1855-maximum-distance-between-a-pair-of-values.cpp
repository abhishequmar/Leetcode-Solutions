class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int a=0,b=0, res=0;;
        while(a<nums1.size() && b<nums2.size()){
            cout<<a<<" "<<b<<endl;
            if(nums1[a]<=nums2[b]){
                res=max(res, b-a);
                b++;
                
            }else if(a<b){
                a++;
            }else if(a==b){
                a++;
                b++;
            }
        }
        return res;
    }
};