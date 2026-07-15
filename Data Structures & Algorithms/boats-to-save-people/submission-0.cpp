class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
     
        int i = 0, j = people.size() - 1;
        int count = 0;

        while(i <= j){
            int total = people[i] + people[j];
            cout<< total << endl;
            if(total <= limit){
                i++;
                j--;
                count++;
            } else{
                count++;
                j--;
            }
        }
        return count;  
    }
};