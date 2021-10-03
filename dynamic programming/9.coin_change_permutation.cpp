// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/coin-change-permutations-official/ojquestion


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

	int amt = 0;
	cin>>amt;

	int dp[amt+1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;


	for(int i = 1; i <= amt; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i >= a[j]){
				dp[i] = dp[i] + dp[i-a[j]];
			}
		}
	}

	cout << dp[amt] << endl;
}