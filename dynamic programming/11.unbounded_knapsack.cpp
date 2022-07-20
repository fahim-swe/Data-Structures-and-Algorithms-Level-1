// // https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/unbounded-knapsack-official/ojquestion


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;

// 	int wt[n], val[n];

// 	for(int i = 0; i < n; i++){
// 		cin>>val[i];
// 	}

// 	for(int i = 0; i < n; i++){
// 		cin>>wt[i];
// 	}


// 	int amt;
// 	cin>>amt;

// 	int dp[amt+1];
// 	memset(dp, 0, sizeof(dp));


// 	for(int j = 1; j <= amt; j++)
// 	{
// 		int mx = 0;
// 		for(int i = 0; i < n; i++)
// 		{
// 			if(wt[i] <= j){
// 				mx = max(mx, val[i]+dp[j-wt[i]]);
// 			}
// 		}
// 		dp[j] = mx;
// 	}

	
// 	cout << dp[amt] << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int value[], int wt[], int n, int capacity)
{
	if(n==0 || capacity == 0) return 0;

	if(capacity >= wt[n-1]){
		return max( unboundedKnapsack(value, wt, n-1, capacity), value[n-1]+unboundedKnapsack(value, wt, n, capacity-wt[n-1]));
	}
	return unboundedKnapsack(value, wt, n-1, capacity);
}

int main()
{
	int n;
	cin >> n;

	int value[n], wt[n];
	for(int i = 0; i < n; i++){
		cin>>value[i];
	}

	for(int i = 0; i < n; i++){
		cin>>wt[i];
	}

	int capacity;
	cin>>capacity;

	cout << unboundedKnapsack(value, wt, n, capacity) << endl;
}