class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> ans;
        vector<vector<string>> res;

        for(string s: strs) {
            string key = s;
            sort(key.begin(), key.end());
            ans[key].push_back(s);
        }

        for(auto &i: ans){
            res.push_back(i.second);
        }
        return res;
    }
};
