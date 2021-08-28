#include <bits/stdc++.h>
using namespace std;

void printDigit(long n)
{
	if(n==0){
		return;
	}
	else{
		printDigit(n/10);
		cout << n%10 <<endl;
	}
}


int main()
{
	long n;
	cin>>n;

	printDigit(n);

	// 12345
	// output : 1  2  3  4  5
}