// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/buy-and-sell-stocks-ota-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int mx = 0;

	int ans = 0;


	for(int i = n-1; i >= 0; i--)
	{
		mx = max(mx, a[i]);
		ans = max(ans, mx-a[i]);
	}

	cout << ans << endl;
}