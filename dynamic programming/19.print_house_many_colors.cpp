// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-many-colors-official/ojquestion#!

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;

	int matrix[n][k];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			cin>>matrix[i][j];
		}
	}

	int dp[n][k];
	memset(dp, 0, sizeof(dp));

	for(int i = 0; i < k; i++){
		dp[0][i] = matrix[0][i];
	}





	for(int i = 1; i < n; i++){
		for(int j = 0; j < k; j++){
			int mx = INT_MAX;

			for(int l = 0; l < k; l++){
				if(l != j){
					mx = min(mx, dp[i-1][l]);
				}
			}

			dp[i][j] = matrix[i][j] + mx;
		}
	}

	

	int ans = INT_MAX;

	for(int i = 0; i < k; i++){
		ans = min(ans, dp[n-1][i]);
	}

	cout << ans <<endl;

}