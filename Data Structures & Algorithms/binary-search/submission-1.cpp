class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            int val = i + (n - i) / 2;
            if (nums[val] >= target) {
                n = val;
            } else {
                i = val + 1;
            }
        }
        return (i < nums.size() && nums[i] == target) ? i : -1;
    }
};
