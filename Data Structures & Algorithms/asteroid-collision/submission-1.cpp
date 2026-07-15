class Solution {
   public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;

        for (int i : a) {
            if (st.empty() || i > 0) {
                st.push(i);
            } else {
                if (st.top() < 0) {
                    st.push(i);
                } else {
                    while (!st.empty() && st.top() < abs(i) && st.top() > 0) {
                        st.pop();
                    }
                    if (!st.empty() && st.top() == abs(i)) {
                        st.pop();
                    } else if(st.empty() || st.top() < 0){
                        st.push(i);
                    }
                }
            }
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());


        return ans;
    }
};