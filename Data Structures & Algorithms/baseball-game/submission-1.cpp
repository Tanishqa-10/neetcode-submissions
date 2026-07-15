class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int ans = 0;

        for(int i = 0; i < ops.size(); i++){
            if(st.empty()){
                st.push(stoi(ops[i]));
                ans += st.top();
            }else if (ops[i] == "+"){
                int m = st.top();
                st.pop();
                int n = st.top();
                st.push(m);
                st.push(m+n);
                ans += st.top();
            }else if(ops[i] == "D"){
                int m = st.top();
                st.push(2*m);
                ans += st.top();
            }else if(ops[i] == "C"){
                ans -= st.top();
                st.pop();
            } else{
                st.push(stoi(ops[i]));
                ans += st.top();
            }
        }

        
        return ans;
    }
};