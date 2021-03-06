



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> dup = strs;
        vector<vector<string>> r;
        map<string, vector<string>> res;
        for(int i=0;i< strs.size();i++){
            sort(strs[i].begin(), strs[i].end());
            res[strs[i]].push_back(dup[i]);
        }
        for(auto i: res)
            r.push_back(i.second);
        return r;
    }
};