#include <bits/stdc++.h>
using namespace std;

int main()
{
	int base, num1, num2;

	cin>>base >> num1 >> num2;

	int ans = 0;
	int p = 0;
	int rem = 0;


	while(num1 != 0 || num2 != 0)
	{
		int d1 = num1%10;
		int d2 = num2%10;

		int t = (d1+d2+rem);
		rem = t/base;
		cout << (t) << endl;

		ans += (t%base)*pow(10, p++);
		num1 /= 10;
		num2 /= 10;
	}

	ans += rem*pow(10, p);

	cout << ans << endl;
}