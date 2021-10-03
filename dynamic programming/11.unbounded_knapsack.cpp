// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/unbounded-knapsack-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int wt[n], val[n];

	for(int i = 0; i < n; i++){
		cin>>val[i];
	}

	for(int i = 0; i < n; i++){
		cin>>wt[i];
	}


	int amt;
	cin>>amt;

	int dp[amt+1];
	memset(dp, 0, sizeof(dp));


	for(int j = 1; j <= amt; j++)
	{
		int mx = 0;
		for(int i = 0; i < n; i++)
		{
			if(wt[i] <= j){
				mx = max(mx, val[i]+dp[j-wt[i]]);
			}
		}
		dp[j] = mx;
	}

	
	cout << dp[amt] << endl;
}