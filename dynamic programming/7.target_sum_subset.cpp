// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int sum;
	cin>>sum;


	int dp[n+1][sum+1];
	memset(dp, 0, sizeof(dp));

	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= sum; j++){
			if(i == 0){
				dp[i][j] = false;
			}
			if(j == 0){
				dp[i][j] = true;
			}
		}
	}


	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= sum; j++){
			if(a[i-1] <= j){
				dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}

	if(dp[n][sum]){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
}