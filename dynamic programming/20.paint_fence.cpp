// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-fence-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n >>k;


	int dp[n+1][2];

	// for n = 0
	dp[0][0] = 0;
	dp[1][0] = 0;

	// for n = 1
	dp[0][1] = k;
	dp[1][1] = k;

	// for n = 2;
	dp[0][2] = k;
	dp[1][2] = k*(k-1);


	// for n = 3 to n
	for(int i = 3; i <= n; i++)
	{
		dp[0][i] = dp[1][i-1];
		dp[1][i] = (dp[0][i-1]+dp[1][i-1])* (k-1);
	}

	// for(int i = 0; i <= n; i++)
	// {
	// 	cout << dp[0][i] << " ";
	// 	cout << dp[1][i] << " " <<endl;
	// }
	cout << dp[0][n]+dp[1][n] << endl;
}