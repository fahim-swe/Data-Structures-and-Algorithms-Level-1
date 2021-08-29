#include <bits/stdc++.h>
using namespace std;



int main()
{
	long n, k;
	cin>>n>>k;

	long temp = n;
	int digits = 0;

	while(temp != 0){
		temp /= 10;
		digits++;
	}

	k = k % digits; 

	if(k < 0){
		k += digits;
	}

	long div = pow(10, k);
	long mul = pow(10, digits-k);

	long rem = n%div;
	long q = n/div;

	cout << rem*mul + q << endl;
}