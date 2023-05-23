#include <bits/stdc++.h>
using namespace std;

class Solution 
{

   
    public: 

     void display(vector<vector<char>>& board)
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[i].size(); j++){
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool isValidNum(vector<vector<char>>& board, int row, int col, char val)
    {
        
        for(int i = 0; i < 9; i++)
        {
            if(i == row) continue;
            if(board[i][col] == val) {
               // cout << "each row checked" << endl;
                return false;
            }
        }
        
        for(int i = 0; i < 9; i++){
            if(i == col ) continue;

            if(board[row][i] == val) {
               // cout << "each col checked" << endl;
                return false;
            }
        }

        // checking in box
        int tRow = (row/3)* 3;
        int tCol = (col/3)*3;

        for(int i = tRow; i < tRow+3; i++){
            for(int j = tCol; j < tCol+3; j++){
                if(i == row && j == col) continue;

                if(board[i][j] == val) {
                   // cout << "each boxed checked" << endl;
                    return false;
                }
            }
        }

        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board)
    {
        for(int row = 0; row < board.size(); row++)
        {
            for(int col = 0; col < board[row].size(); col++)
            {
                if(board[row][col] == '.') continue;

                if(!isValidNum(board, row, col, board[row][col])){

                 //   cout << board[row][col] << " " << row << " " << col << endl;
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{
    vector<vector<char>> board = { 
                                  {'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}
                                };


    Solution S;
   // S.display(board);

   cout << S.isValidSudoku(board) << endl;

    vector<vector<char>> board2 = {
                                {'8','3','.','.','7','.','.','.','.'},
                                {'6','.','.','1','9','5','.','.','.'},
                                {'.','9','8','.','.','.','.','6','.'},
                                {'8','.','.','.','6','.','.','.','3'},
                                {'4','.','.','8','.','3','.','.','1'},
                                {'7','.','.','.','2','.','.','.','6'},
                                {'.','6','.','.','.','.','2','8','.'},
                                {'.','.','.','4','1','9','.','.','5'},
                                {'.','.','.','.','8','.','.','7','9'}
                               };

    cout << S.isValidSudoku(board2) << endl;


}