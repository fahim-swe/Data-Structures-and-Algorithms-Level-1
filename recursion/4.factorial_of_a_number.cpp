#include <bits/stdc++.h>
using namespace std;

int fac(int n)
{
	if(n==1){
		return 1;
	}
	else{
		return fac(n-1)*n;
	}
}

int main()
{
	// fac(5) = 1*2*3*4*5

	int n;
	cin>>n;
	if(n>0)
		cout<<fac(n)<<endl;
}