class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;

        for(string s: strs){
            ans += to_string(s.length());
            ans += '#'; 
            ans += s;
        }

        return ans;
    }

    vector<string> decode(string ans) {
        int i = 0;
        vector<string> final;

        while(i < ans.size()){
            int j = i;
            while(ans[j] != '#'){
                j++;
            }
            int len = stoi(ans.substr(i, j - i));
            i = j + 1;
            final.push_back(ans.substr(i, len));
            i += len;

        }
        return final;

    }

};

