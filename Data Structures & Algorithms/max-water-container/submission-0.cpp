class Solution {
public:
    int maxArea(vector<int>& nums) {
        int product = 0;
        int i = 0;
        int j = nums.size() - 1;

        while(i < j){
            int l = min(nums[i], nums[j]);
            int b = j - i;
            int curr = l * b;
            product = max(curr, product);

            if(nums[i] < nums[j]){
                i++;
            } else {
                j--;
            }
        }
        return product;
    }
};
