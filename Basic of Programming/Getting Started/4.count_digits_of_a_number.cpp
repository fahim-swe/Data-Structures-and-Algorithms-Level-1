#include <bits/stdc++.h>
using namespace std;

// other option
int countDigit(long n)
{
	int digit = 0;

	while(n != 0){
		n /= 10;
		digit++;
	}

	return digit;
}
int main()
{
	long n;
	cin>>n;

	cout << (int)log10(n)+1<<endl;
	cout << countDigit(n) << endl;
}