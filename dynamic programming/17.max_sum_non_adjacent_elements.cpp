// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy


#include <bits/stdc++.h>
using namespace std;


void printAdjSubset(int idx, int n, int a[], int sub[], bool f)
{
	if(idx ==  n){
		for(int i = 0; i < n; i++){
			cout << sub[i] << " ";
		}
		cout << endl;
	}
	else{
		if(f){
			sub[idx] = -1;
			printAdjSubset(idx+1, n, a, sub, false);
		}
		else{
			sub[idx] = a[idx];
			printAdjSubset(idx+1, n, a, sub, true);
			sub[idx] = -1;
			printAdjSubset(idx+1, n, a, sub, false);
		}
	}
}
int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i= 0; i < n; i++){
		cin>>a[i];
	}

	// int sub[n];
	// // printAdjSubset(0, n, a, sub, false);
	// // // brote froces solution

	int dp[n][2];

	dp[0][0] = a[0];
	dp[0][1] = 0;

	for(int i = 1; i < n; i++){
		dp[i][0] = dp[i-1][1]+a[i];
		dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
	}

	cout << max(dp[n-1][0], dp[n-1][1]) << endl;

}



