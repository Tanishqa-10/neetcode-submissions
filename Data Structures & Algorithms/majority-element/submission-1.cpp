class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0, max = 0;
        
        for (int n : nums) {
            mp[n]++;
            if (mp[n] > max) {
                ans = n;
                max = mp[n];
            }
        }
        return ans;
    }
};