#include <bits/stdc++.h>
using namespace std;

int base1ToDecimal(int num, int base)
{
	int ans = 0;
	int p = 0;

	while(num != 0)
	{
		ans += (num%10)*pow(base, p++);
		num /= 10;
	}

	return ans;

}

int DecimaltoBase2(int num, int base)
{
	int ans= 0;
	int p = 0;

	while(num != 0)
	{
		ans += (num%base)*pow(10, p++);
		num /= base;
	}

	return ans;
}


int main()
{
	int num, base1, base2;

	cin>>num >> base1 >> base2;


	num = base1ToDecimal(num, base1);
	//cout << base1ToDecimal(num, base1) << endl;
	cout << DecimaltoBase2(num, base2) << endl;
}