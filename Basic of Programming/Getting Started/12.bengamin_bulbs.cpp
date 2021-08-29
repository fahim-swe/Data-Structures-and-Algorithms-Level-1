#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	cin>>n;

	// print all perfect square number
	// have odd numbers of divisor
	for(int i = 1; i*i <= n; i++){
		cout<<i*i<<endl;
	}
}