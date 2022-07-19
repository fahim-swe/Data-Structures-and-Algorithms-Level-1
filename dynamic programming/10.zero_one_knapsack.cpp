// 

#include <bits/stdc++.h>
using namespace std;

int dp[100][1000];


int zeroOneKnapsack(int value[], int wt[], int n, int capacity)
{
	if(n==0 || capacity == 0) return 0;

	if(dp[n][capacity] != -1) return dp[n][capacity];

	if(capacity >= wt[n-1]){
		return dp[n][capacity] =  max( zeroOneKnapsack(value, wt, n-1, capacity), value[n-1]+zeroOneKnapsack(value, wt, n-1, capacity-wt[n-1]));
	}
	return dp[n][capacity] =  zeroOneKnapsack(value, wt, n-1, capacity);
}

int main()
{
	int n;
	cin>>n;
	memset(dp, -1, sizeof(dp));

	int value[n], wt[n];
	for(int i= 0; i< n; i++){
		cin>>value[i];
	}

	for(int i =0; i < n; i++){
		cin>>wt[i];
	}

	int capacity;
	cin>>capacity;

	cout << zeroOneKnapsack(value, wt, n, capacity) << endl;
}