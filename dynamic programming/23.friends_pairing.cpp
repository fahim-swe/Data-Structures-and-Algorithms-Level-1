// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/friends-pairing-official/ojquestion

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[21];

ll fun(int n){
	if(n==1 || n==2){
		return n;
	}

	if(n==3){
		return 4;
	}
	else if(dp[n] != -1){
		return dp[n];
	}
	else{
		return dp[n] = fun(n-1) + fun(n-2)*(n-1);
	}
}
int main()
{
	int n;
	cin>>n;

	memset(dp, -1, sizeof(dp));
	cout << fun(n) << endl;
}