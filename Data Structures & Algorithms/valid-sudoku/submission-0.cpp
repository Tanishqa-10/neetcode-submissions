class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map <int, unordered_set<int>> col;
        unordered_map <int, unordered_set<int>> row;
        unordered_map <int, unordered_set<int>> sqr;

        for(int i = 0; i< 9; i++){
            for(int j = 0; j < 9; j++){

                if(board[i][j] == '.'){
                    continue;
                }

                int val = (i/3) * 3 + (j/3);


                if(row[i].count(board[i][j]) || 
                col[j].count(board[i][j]) ||
                sqr[val].count(board[i][j])){
                    return false;
                }

                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                sqr[val].insert(board[i][j]);

        }
        }

    return true;
        
    }
};
