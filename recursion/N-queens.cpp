#include <iostream>
#include <vector>
using namespace std;

bool safe(vector<vector<bool>>& board, int row, int col) {
    // Check column
    for (int i = 0; i < row; i++) {
        if (board[i][col]) {
            return false;
        }
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < board.size(); i--, j++) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

int count(vector<vector<bool>> board,int row,int column){
    if(row == board.size()){
        return 1;
    }

    int total = 0;

    for(int col = 0; col < board.size(); col++){
        if(safe(board,row,col)){
            board[row][col] = true;
            total += count(board,row+1,col);
            board[row][col] = false;
        }
    }

    return total;
}

int main() {
    int n = 4;
    vector<vector<bool>> board(n, vector<bool>(n, false));
    cout<< count(board,0,0);
    return 0;
}