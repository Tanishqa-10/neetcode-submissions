class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> set;
        int ans = 0;
        int j = 0;
         for(int i = 0; i < s.size(); i++){
            while(set.find(s[i]) != set.end()){
                set.erase(s[j]);
                j++;
            }

            set.insert(s[i]);
            ans = max(ans, i - j + 1);

         }
        return ans;
    }
};
