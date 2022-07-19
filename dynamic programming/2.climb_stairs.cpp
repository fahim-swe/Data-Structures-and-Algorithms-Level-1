#include <bits/stdc++.h>
using namespace std;

int dp[100];

int climbStairs(int nth)
{
	if(nth==0) return 1;
	if(nth < 0) return 0;

	if(dp[nth] != -1) return dp[nth];

	int _1th = climbStairs(nth-1);
	int _2th = climbStairs(nth-2);
	int _3th = climbStairs(nth-3);

	return dp[nth] = _1th+ _2th + _3th;
}

int main()
{
	int nth;
	cin>>nth;

	memset(dp, -1, sizeof(dp));

	cout << climbStairs(nth) << endl;
}