// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/min-cost-maze-traversal-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int matrix[110][110];
int dp[110][110];

int minCost(int r, int c)
{

	if(r < 0 || c < 0){
		return INT_MAX;
	}

	if(r==0 && c==0){
		return matrix[0][0];
	}

	if(dp[r][c] != -1){
		return dp[r][c];
	}

	return dp[r][c] = matrix[r][c] + min(minCost(r-1, c), minCost(r, c-1));
}
int main()
{
	memset(dp, -1, sizeof(dp));
	int n, m;
	cin>>n >> m;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>matrix[i][j];
		}
	}




	cout << minCost(n-1, m-1) << endl;

	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < m; j++){
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	
	// for(int i = 1; i < n; i++){
	// 	matrix[0][i] += matrix[0][i-1];
	// }

	// for(int i = 1; i < m; i++){
	// 	matrix[i][0] += matrix[i-1][0];
	// }

	// for(int i = 1; i < n; i++){
	// 	for(int j = 1; j < m; j++){
	// 		matrix[i][j] += min(matrix[i-1][j], matrix[i][j-1]);
	// 	}
	// }

	// cout << matrix[n-1][m-1] << endl;
}