class Solution {
    public int maxArea(int[] h) {
        int ans = 0;

        int l = 0, r = h.length - 1;
        while (l < r) {
            int i = Math.min(h[r], h[l]);
            int j = r - l;
            int vol = i * j;
            System.out.println(i + " " + j);
            ans = Math.max(ans, vol);
            if (h[l] < h[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
}
