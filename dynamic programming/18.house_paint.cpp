// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-official/ojquestion#!

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int matrix[n][3];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin>>matrix[i][j];
		}
	}

	int dp[n][3];

	dp[0][0] = matrix[0][0];
	dp[0][1] = matrix[0][1];
	dp[0][2] = matrix[0][2];

	for(int i = 1; i < n; i++){
		dp[i][0] = matrix[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = matrix[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = matrix[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}

	cout << min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2])) << endl;
}