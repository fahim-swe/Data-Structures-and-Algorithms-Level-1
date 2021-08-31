#include <bits/stdc++.h>
using namespace std;

int main()
{
	long num, base;
	cin>>num >> base;


	long ans = 0;
	int p = 0;


	while(num != 0)
	{
		ans += (num%10)*pow(base, p++);
		num /= 10;
	}

	cout << ans << endl;
}