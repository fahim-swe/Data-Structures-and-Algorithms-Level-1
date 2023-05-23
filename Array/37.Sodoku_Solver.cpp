#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

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

    void helper(vector<vector<char>>& board, int row, int col)
    {
        if(row == 9 && col == 9) return ;


        int tRow = 0;
        int tCol = 0;

        if(col == 9){
            tRow = row+1;
            tCol = 0;
        }
        else{
            tRow = row;
            tCol = col+1;
        }


        if(board[row][col] != '.') helper(board, tRow, tCol);

        for(int val = 1; val <= 9; val++){
            if(isValidNum(board, row, col, val)){
                board[row][col] = val;
                helper(board, tRow, tCol);
                board[row][col] = '.';
            }
        }


    }
    void solveSudoku(vector<vector<char>>& board) {
        
    }
};


int main()
{

}