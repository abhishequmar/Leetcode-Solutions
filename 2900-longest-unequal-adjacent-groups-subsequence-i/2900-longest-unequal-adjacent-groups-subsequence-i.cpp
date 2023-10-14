class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string>res;
       int c=groups[0];
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(groups[i]!=c){
                c=groups[i];
                res.push_back(words[i]);
            }
        }
        return res;
    }
};