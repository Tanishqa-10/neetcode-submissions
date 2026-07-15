class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int maxCount = 0;
        int l =0, r = 0;
        int ans = 0;

        while(l < s.size() && r < s.size()){
            m[s[r]]++;

            maxCount = max(maxCount, m[s[r]]);

            if((r - l + 1) - maxCount > k){
                m[s[l]]--;
                l++;
            }
            ans = max(ans,r - l + 1);

            r++;
        }
        return ans;

        
    }
};
