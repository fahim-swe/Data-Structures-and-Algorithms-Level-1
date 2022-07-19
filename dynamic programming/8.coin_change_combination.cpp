// // https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/coin-change-combination-official/ojquestion


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;

// 	int a[n];
// 	for(int i = 0; i < n; i++){
// 		cin>>a[i];
// 	}

// 	int amt;
// 	cin>>amt;

// 	int dp[amt+1];
// 	memset(dp, 0, sizeof(dp));
// 	dp[0] = 1;

// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = a[i]; j <= amt; j++)
// 		{
// 			dp[j] = dp[j] + dp[j-a[i]];
// 		}
// 	}

// 	cout << dp[amt] << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int amt;
	cin>>amt;

	int dp[amt+1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;

	for(int i = 0; i < n; i++){
		for(int j = arr[i]; j <= amt; j++){

			dp[j] += dp[j-arr[i]];
		}
	}

	cout << dp[amt] << endl;
}