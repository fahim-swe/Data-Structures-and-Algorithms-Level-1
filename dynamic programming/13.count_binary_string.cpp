// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-binary-strings-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;


	int dp[n+1][2];
	memset(dp, 0, sizeof(dp));
	dp[1][0] = 1;
	dp[1][1] = 1;

	for(int i = 2; i <= n; i++){
		dp[i][0] = dp[i-1][1];
		dp[i][1] = dp[i-1][0]+dp[i-1][1];
	} 


	cout << dp[n][0]+dp[n][1] << endl;
}