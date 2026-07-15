class Solution {
public:
    int trap(vector<int>& h) {

        int l = 0, r = h.size();
        int lmax = h[0], rmax = h[r-1];
        int ans = 0;

        while(l < r){
            if(lmax < rmax){
                l++;
                lmax = max(lmax, h[l]);
                ans += lmax - h[l];
            }
            else{
                r--;
                rmax = max(rmax, h[r]);
                ans += rmax - h[r];
            }
        }
        return ans;
    }
};
