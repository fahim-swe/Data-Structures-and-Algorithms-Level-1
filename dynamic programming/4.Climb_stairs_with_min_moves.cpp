// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-minimum-moves-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int dp[21];
int a[21];
int N;

int minJumps(int n)
{
	if(n == N){
		return 0;
	}

	if(dp[n] != -1){
		return dp[n];
	}

	int p = N;
	for(int j = 1; j <= a[n]; j++){
		if((n+j) <= N)
		{
			// int p1 = minJumps(n+j);
			// //cout << p1 << " " << p << endl;
			// p = min(p, p1);
			p = min(p, minJumps(n+j));
		}
	}

	return dp[n] = p+1;
}

int main()
{
	memset(dp, -1, sizeof(dp));
	cin>>N;

	for(int i = 0; i < N; i++){
		cin>>a[i];
	}

	cout << minJumps(0) << endl;

}