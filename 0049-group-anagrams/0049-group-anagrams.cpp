class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string t=strs[i];
            sort(t.begin(),t.end());
            m[t].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto i=m.begin();i!=m.end();i++){
            res.push_back(i->second);
        }
        return res;
        
    }
};