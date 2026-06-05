class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        vector<int> ans;

        for(int num : nums){
            freq[num]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto val : freq){
            pq.push({val.second, val.first});
        }

        while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    } 
    };

