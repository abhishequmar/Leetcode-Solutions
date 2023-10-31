class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>v;
        int t=pref[0];
        v.push_back(pref[0]);
        for(int i=1;i<pref.size();i++){
            v.push_back(pref[i]^t);
            t^=v[v.size()-1];
        }
        return v;

        
    }
};