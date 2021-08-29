#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;


	int dp[n+1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;

	

	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < i; j++){
			cout << dp[j] << "\t";
		}
		for(int j = i; j >= 1; j--){
			dp[j] += dp[j-1];
		}
		cout<<endl;
	}
}