// https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/n-queens-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

bool chess[10][10];

bool isSafe(int row, int col, int n)
{
	// To the col
	for(int i = 0; i < n; i++)
	{
		if(chess[i][col] == 1){
			return false;
		}
	}

	// To the row
	for(int i = 0; i < n; i++)
	{
		if(chess[row][i] == 1){
			return false;
		}
	}


	// 
	for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--)
	{
		if(chess[i][j] == 1){
			return false;
		}
	}


	for(int i = row-1, j = col+1; i >= 0 && j > n; i--, j++){
		if(chess[i][j] == 1){
			return false;
		}
	}


	return true;
}

void NQeens(string ans, int n, int row)
{
	
	if(row == n){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
			{
				cout << chess[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;
		return;
	}

	for(int col = 0; col < n; col++)
	{
		if(chess[row][col] == 0  && isSafe(row, col, n)){
			chess[row][col] = 1;
			NQeens(ans, n, row+1);
			chess[row][col] = 0;
		}
	}
}

int main()
{
	int n;
	cin>>n;

	NQeens("", n, 1);
}


  public static void printNQueens(int[][] chess, String qsf, int row){
        if(row == chess.length){
            System.out.println(qsf + ".");
            return;
        }
        for(int col = 0; col < chess.length; col++){
            if(chess[row][col] == 0 && isQueenSafe(chess, row, col) == true){
                chess[row][col] = 1;
                printNQueens(chess, qsf + row + "-" + col + ", ", row + 1);
                chess[row][col] = 0;
            }
        }
    }

    public static boolean isQueenSafe(int[][] chess, int row, int col){
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
            if(chess[i][j] == 1){
                return false;
            }
        }

        for(int i = row - 1, j = col; i >= 0; i--){
            if(chess[i][j] == 1){
                return false;
            }
        }

        for(int i = row - 1, j = col + 1; i >= 0 && j < chess.length; i--, j++){
            if(chess[i][j] == 1){
                return false;
            }
        }

        for(int i = row, j = col - 1; j >= 0; j--){
            if(chess[i][j] == 1){
                return false;
            }
        }

        return true;
    }