// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/fibonacci-dp-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int dp[50];

int fib(int n)
{


	if(n==0 || n==1){
		return n;
	}

	if(dp[n] != -1){
		return dp[n];
	}


	return dp[n] = fib(n-1)+fib(n-2);
}
int main()
{
	memset(dp, -1, sizeof(dp));
	
	int n;
	cin>>n;


	cout << fib(n) << endl;
}