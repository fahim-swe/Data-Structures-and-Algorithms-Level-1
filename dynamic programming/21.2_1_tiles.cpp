// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/tiling1-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int dp[101];

int fib(int n)
{
	if(n==1 || n == 2){
		return n;
	}

	if(dp[n] != -1){
		return dp[n];
	}
	else{
		return dp[n] = fib(n-1)+fib(n-2);
	}
}
int main()
{
	int n;
	cin>>n;

	memset(dp, -1, sizeof(dp));

	cout << fib(n) << endl;

}