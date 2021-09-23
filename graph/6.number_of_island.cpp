// https://www.pepcoding.com/resources/online-java-foundation/graphs/count-islands-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

bool visited[10000][10000];
int matrix[10000][10000];

void dfs(int i, int j, int n, int m)
{
	if(i < 0 || j < 0 || (i >= n) || (j >= m) || (visited[i][j] == true || (matrix[i][j] == 1))){
		return ;
	}
	visited[i][j] = true;
	dfs(i-1, j, n, m);
	dfs(i, j+1, n, m);
	dfs(i+1, j, n, m);
	dfs(i, j-1, n, m);
}

int main()
{
	int n, m;
	cin>>n>>m;

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>matrix[i][j];
		}
	}

	int c = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if( !visited[i][j] && matrix[i][j] == 0){
				dfs(i, j, n, m);
				c++;
			}
		}
	}

	cout << c << endl;
}