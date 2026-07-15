class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int left=0;
        int right = n-1, mid;
        
        while (left<right) {
            mid = left + (right-left)/2;

            // if (mid-1>=0 && mid+1<n) {
            //     if (nums[mid-1]>nums[mid] &&
            //         nums[mid] < nums[mid+1]) {
            //             return nums[mid];
            //         }
            // }


            if (nums[mid] < nums[right]) {
                right = mid;
            } else {
                left = mid+1;
            }
        }

        return nums[left];
        
    }
};
