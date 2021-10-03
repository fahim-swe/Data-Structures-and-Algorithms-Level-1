// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/tiling2-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int dp[101];

int m_1_Tiles(int n, int m)
{
	
	if(n < m){
		return 1;
	}
	else if(n == m){
		return 2;
	}

	
	if(dp[n] != -1){
		return dp[n];
	}

	else{
		return dp[n] = m_1_Tiles(n-1, m) + m_1_Tiles(n-m, m);
	}
}
int main()
{
	int n, m;

	cin>>n >> m;

	memset(dp, -1, sizeof(dp));

	cout << m_1_Tiles(n, m) << endl;

}