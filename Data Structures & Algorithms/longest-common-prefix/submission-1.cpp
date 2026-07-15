class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size() - 1;

        if(n == 0){
            return strs[0];
        }

        sort(strs.begin(), strs.end());

        for(int i = 0; i < min(strs[0].length(), strs[n].length()); i++){
            if(strs[0][i] != strs[n][i]){
                return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};