class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            int mid = i + (n - i) / 2;
            if (nums[mid] >= target) {
                n = mid;
            } else {
                i = mid + 1;
            }
        }
        return (i < nums.size() && nums[i] == target) ? i : -1;
    }
};
