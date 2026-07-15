class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        int i = 0;
        stack<int> st;
        while (i < tokens.size()) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int n = st.top();
                st.pop();
                int m = st.top();
                st.pop();

                if (tokens[i] == "+")
                    st.push(m + n);
                else if (tokens[i] == "-")
                    st.push(m - n);
                else if (tokens[i] == "*")
                    st.push(m * n);
                else
                    st.push(m / n);

            } else
                st.push(stoi(tokens[i]));
            i++;
        }
        return st.top();
    }
};
