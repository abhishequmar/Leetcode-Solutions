class Solution {
public:
    int numTriplets(vector<int>& n1, vector<int>& n2) {
        vector<long long>nums1, nums2;
        for(auto i:n1){
            long long t=i;
            nums1.push_back(i);
        }
        for(auto i:n2){
            long long t=i;
            nums2.push_back(i);
        }
        map<long long, int>m;
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                m[nums1[i]*nums1[j]]++;
            }
        }
        map<long long,int>m2;
        int res=0;
        for(int i=0;i<nums2.size()-1;i++){
            for(int j=i+1;j<nums2.size();j++){
                m2[nums2[i]*nums2[j]]++;
            }
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]*=nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            nums2[i]*=nums2[i];
        }
        for(auto i:nums1){
            res+=m2[i];
        }
        for(auto i:nums2){
            res+=m[i];
        }
        return res;
    }
};