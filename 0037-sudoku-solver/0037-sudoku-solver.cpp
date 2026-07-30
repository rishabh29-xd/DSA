class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char digit) {
        // horizontal
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == digit) {
                return false;
            }
        }
        // vertical
        for (int j = 0; j < 9; j++) {
            if (board[j][col] == digit) {
                return false;
            }
        }
        // Grid
        int strow = (row / 3) * 3;
        int stcol = (col / 3) * 3;
        for (int i = strow; i <= strow + 2; i++) {
            for (int j = stcol; j <= stcol + 2; j++) {
                if (board[i][j] == digit) {   // use i, j not strow, stcol
                    return false;
                }
            }
        }
        return true;
    }

    bool sudoku(vector<vector<char>>& board, int row, int col) {
        if (row == 9) {
            return true;
        }
        int nextrow = row, nextcol = col + 1;
        if (col == 9) {
            nextrow = row + 1;
            nextcol = 0;
        }
        if (board[row][col] != '.') {
            return sudoku(board, nextrow, nextcol);
        }
        for (char digit = '1'; digit <= '9'; digit++) {  
            if (isSafe(board, row, col, digit)) {
                board[row][col] = digit;
                if (sudoku(board, nextrow, nextcol)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;  
    }

    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board, 0, 0);   
    }
};