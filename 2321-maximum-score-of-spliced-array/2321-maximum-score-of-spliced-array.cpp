class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v=nums1;
        int c=0,t=0, c1=0,t1=0,s1=0,s2=0;
        for(int i=0;i<nums1.size();i++){
            s1+=nums1[i];
            s2+=nums2[i];
        }
        if(s1<s2){
            swap(nums1,nums2);
            swap(s1,s2);
        }
        for(int i=0;i<nums1.size();i++){
            v[i]=nums2[i]-nums1[i];
        }
        for(int i=0;i<v.size();i++){
            t+=v[i];
            if(t<0){
                t=0;
            }
            c=max(c,t);
        }
        for(int i=0;i<v.size();i++){
            v[i]*=-1;
            t1+=v[i];
            if(t1<0){
                t1=0;
            }
            c1=max(c1,t1);
        }
        for(auto i:nums1){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:nums2){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<s1<<" "<<s2<<" "<<c;
        return max(s1+c, s2+c1);
        
    }
};