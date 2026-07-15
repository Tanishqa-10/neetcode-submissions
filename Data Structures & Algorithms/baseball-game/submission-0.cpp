class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int ans = 0;

        for(int i = 0; i < ops.size(); i++){
            if(st.empty()){
                st.push(stoi(ops[i]));
            }else if (ops[i] == "+"){
                int m = st.top();
                st.pop();
                int n = st.top();
                st.push(m);
                st.push(m+n);
            }else if(ops[i] == "D"){
                int m = st.top();
                st.push(2*m);
            }else if(ops[i] == "C"){
                st.pop();
            } else{
                st.push(stoi(ops[i]));
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};