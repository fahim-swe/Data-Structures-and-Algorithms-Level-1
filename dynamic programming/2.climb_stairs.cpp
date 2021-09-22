// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-official/ojquestion#!


#include <bits/stdc++.h>
using namespace std;


int dp[21];


int ClimbStairs(int n)
{
	if(n == 0){
		return 1;
	}
	if(n < 0){
		return 0;
	}

	if(dp[n] != -1){
		return dp[n];
	}

	int p1 = ClimbStairs(n-1);
	int p2 = ClimbStairs(n-2);
	int p3 = ClimbStairs(n-3);

	return dp[n] = p1+p2+p3;
}
int main()
{
	memset(dp, -1, sizeof(dp));

	int n;

	cin>>n;

	cout << ClimbStairs(n) << endl;

}