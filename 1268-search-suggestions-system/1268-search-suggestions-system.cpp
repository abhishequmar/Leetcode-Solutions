class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string s) {
        sort(products.begin(), products.end());
        map<string, vector<string>>m;
        for(auto i:products){
            string t="";
            for(auto j:i){
                t+=j;
                m[t].push_back(i);
            }
        }
        vector<vector<string>>res;
        string tmp="";
        for(auto i:s){
            tmp+=i;
            if(m[tmp].size()<3){
                res.push_back(m[tmp]);
            }else{
                res.push_back({m[tmp][0], m[tmp][1], m[tmp][2]});
            }
            
        }
        return res;
    }
};