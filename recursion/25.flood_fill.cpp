// https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/flood-fill-official/ojquestion


#include <bits/stdc++.h>
using namespace std;


int maze[10][10];
bool visited[10][10];

void flood_fill(int row, int col, int n, int m, string ans)
{
	
 	if(row < 0 || col < 0 || row > n || col > m){
		return ;
	}

	if(maze[row][col] == 1 || visited[row][col] == true){
		return ;
	}

	//cout << row << " " << col << " " << n << " " << m << " " << ans <<endl;

	if(row == n && col == m){
		cout << ans << endl;
	}


	visited[row][col] = true;

	flood_fill(row-1, col, n, m, ans+"t");
	flood_fill(row, col-1, n, m, ans+"l");
	flood_fill(row+1, col, n, m, ans+"d");
	flood_fill(row, col+1, n, m, ans+"r");

	visited[row][col] = false;
	
}
int main()
{
	int n, m;

	cin>>n>>m;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			cin>>maze[i][j];
		}
	}

	// for(int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < m; j++){
	// 		cout << maze[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }



	flood_fill(0, 0, n-1, m-1, "");
}