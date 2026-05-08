class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
           unordered_set<char> visited;
           for(int j = 0;j < 9;j++) {
            if(board[i][j] == '.') continue;
            if(visited.count(board[i][j])) return false;
            visited.insert(board[i][j]);
           }
        }

        for(int i = 0; i < 9; i++){
           unordered_set<char> visited;
           for(int j = 0;j < 9;j++) {
            if(board[j][i] == '.') continue;
            if(visited.count(board[j][i])) return false;
            visited.insert(board[j][i]);
           }
        }

        for(int i = 0; i < 9; i++){
           unordered_set<char> visited;
           for(int j = 0;j < 3;j++) {

            for(int k = 0;k < 3;k++) {
                int row = (i / 3) * 3 + j;
                int coln = (i % 3) * 3 + k;
                if(board[row][coln] == '.') continue;
                if(visited.count(board[row][coln])) return false;
                visited.insert(board[row][coln]);
            }
           }
        }
        return true;

    }
};
