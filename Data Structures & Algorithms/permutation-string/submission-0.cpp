class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        if(s1.length() > s2.length()){
            return false;
        }

        for(char c: s1){
            m1[c]++;
        }
        
        int l = 0;

        for(int r = 0; r < s2.size(); r++){
            m2[s2[r]]++;

            if (r - l + 1 > s1.length()) {
                m2[s2[l]]--;
                if (m2[s2[l]] == 0) {
                    m2.erase(s2[l]);
                }
                l++;
            }


            if(m1 == m2){
                return true;
            }
            
        }
        return false;
    }
};
